/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        ListNode hair=head;
        ListNode tort=head;
        while(hair!=null && hair.next!=null){
            hair=hair.next.next;
            tort=tort.next;
            if(hair==tort){
                return true;
            }
        }
        return false;
    }
}