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
    public ListNode removeElements(ListNode head, int val) {
        ListNode temp=head;
        if(head==null) return head;
        while(head!=null && head.val==val){
            head=head.next;
        }
        while(temp.next!=null){
            if(temp.next.val==val){
                if(temp.next.next==null){
                    temp.next=null;
                }
                else{
                    temp.next=temp.next.next;
                }
            }
            else{
                temp=temp.next;
            }
        }
        return head;
    }
}