void counterDiagonal(int mat[N][N], int n){
  // Write your code here
    for(int k=0; k<n; k++){
        for(int i=0, j=k; j>=0 && i<=k; i++, j--){
            cout<<mat[i][j]<<" ";  
        }
    }
  	for(int k=n-1; k>0; k--){
        for(int i=n-k, j=n-1; i<n; i++, j--){
            cout<<mat[i][j]<<" ";  
        }
    }
}
