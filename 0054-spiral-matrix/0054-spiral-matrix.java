class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
         ArrayList <Integer> arr=new ArrayList<>();
        if(matrix==null || matrix.length ==0) return arr;
        int m=matrix.length;
        int n=matrix[0].length;
        int up=0;
        int down=m-1;
        int left=0;
        int right=n-1;
        while(left<=right && up<=down){
            for(int i=left;i<=right;i++){
                arr.add(matrix[up][i]);
            }
            up++;
            for(int i=up;i<=down;i++){
                arr.add(matrix[i][right]);
            }
            right--;
            if(up<=down){
                for(int i=right;i>=left;i--){
                    arr.add(matrix[down][i]);
                }
                down--;
            }
            if(left<=right){
                for(int i=down;i>=up;i--){
                    arr.add(matrix[i][left]);
                }
                left++;
            }
        }
        return arr;
    }
}