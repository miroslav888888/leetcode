/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
        public ListNode MergeTwoLists(ListNode list1, ListNode list2)
    {
        ListNode a=new ListNode(0);
        ListNode ans= compare(list1, list2, a,a);
        return ans.next;
    }
    public ListNode compare(ListNode list1, ListNode list2, ListNode list3, ListNode list4)
    {
        if (list1 == null && list2 == null) return list4;

        if (list1 != null && (list2 == null || list1.val < list2.val))
        {
            list3.next= new ListNode(0);
            list3=list3.next;
            list3.val = list1.val;
            return compare(list1.next, list2, list3,list4);
        }
        else if (list2 != null)
        {
            list3.next= new ListNode(0);
            list3=list3.next;
            list3.val = list2.val;
            return compare(list1, list2.next, list3,list4);
        }

        return list4;
    }
}