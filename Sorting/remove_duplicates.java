// Return the new size of array.
static int removeDuplicates(int arr[], int size)
{
 int i = 1, j = 1;
       while (i < size){
           if (arr[i] != arr[i-1]){
               arr[j] = arr[i];
               j++;
           }
           i++;
       }
       return j;
}
