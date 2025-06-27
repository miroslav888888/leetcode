public class Solution {
    public IList<IList<int>> ThreeSum(int[] nums)
    {
        var aa = nums.Order().ToArray();
        int end = aa.Length - 1;
        int sum = aa[0] + aa[1] + aa[2];
        IList<int> result = [];
        IList<IList<int>> results = [];
        for (int i = 0; i <= end - 2; i++)
        {
            if (i > 0) if (aa[i - 1] == aa[i]) continue;
            int start = i + 1;
            end = aa.Length - 1;
            while (start < end && i < end)
            {
                sum = aa[i] + aa[start] + aa[end];
                if (sum == 0)
                {
                    result.Add(aa[i]);
                    result.Add(aa[start]);
                    result.Add(aa[end]);
                    if (results.Count() != 0)
                    {
                        if (!(results[results.Count() - 1][0] == result[0]&&results[results.Count() - 1][1] == result[1])) results.Add(result);
                    }
                    else results.Add(result);
                    start++;
                    end--;
                    result = [];
                }
                else if (sum < 0) start++;
                else end--;
            }
        }
        return results;
    }
}