class Result{
  static int maxToys(int cost[], int n, int X){
	// Write your code here
    int remainingAmount = X;
       int count = 0;
       Arrays.sort(cost);
       for (int i = 0; i < n; i++)
       {
           if (remainingAmount < cost[i])
               break;
           remainingAmount -= cost[i];
           count++;
       }
       return count;
  }
}
