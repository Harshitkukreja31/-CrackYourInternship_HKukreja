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
    public ListNode reverseList(ListNode head) {
        ListNode prev=null;
        ListNode curr=head;
        while(curr!=null){
            ListNode next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    public ListNode addTwoNumbers1(ListNode l1, ListNode l2) {
        ListNode ans=new ListNode();
        ListNode temp=ans;
        int carry=0;
        while(l1!=null && l2!=null){
            int sum=l1.val+l2.val+carry;
            int toadd=sum%10;
            carry=sum/10;
            temp.next=new ListNode(toadd);
            l1=l1.next;
            l2=l2.next;
            temp=temp.next;
        }
        while(l1!=null){
            int sum=l1.val+carry;
            int toadd=sum%10;
            carry=sum/10;
            temp.next=new ListNode(toadd);
            l1=l1.next;
            temp=temp.next;
        }
        while(l2!=null){
            int sum=l2.val+carry;
            int toadd=sum%10;
            carry=sum/10;
            temp.next=new ListNode(toadd);
            l2=l2.next;
            temp=temp.next;
        }
        if(carry!=0){
            temp.next=new ListNode(carry);
            temp=temp.next;
        }
        return ans.next;
    }
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode nl1=reverseList(l1);
        ListNode nl2=reverseList(l2);
        ListNode ans= addTwoNumbers1(nl1,nl2);
        return reverseList(ans);
    }
}