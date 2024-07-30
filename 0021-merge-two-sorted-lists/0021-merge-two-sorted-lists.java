/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        
        ListNode temp1=list1;
        ListNode temp2=list2;
        ListNode ans=new ListNode();
        ListNode idx=ans;
        while(temp1!=null && temp2!=null){
            if(temp1.val<=temp2.val){
                idx.next=new ListNode(temp1.val);
                temp1=temp1.next;
                idx=idx.next;
            }
            else{
                idx.next=new ListNode(temp2.val);
                temp2=temp2.next;
                idx=idx.next;
            }
        }
        while(temp1!=null){
            idx.next=new ListNode(temp1.val);
            temp1=temp1.next;
            idx=idx.next;
        }
        while(temp2!=null){
            idx.next=new ListNode(temp2.val);
            temp2=temp2.next;
            idx=idx.next;
        }
        return ans.next;
    }
}