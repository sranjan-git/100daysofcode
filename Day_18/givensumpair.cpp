class solution{
public;
int getPairsCount (int arr[], int nn int k){
  unordered_map <int, int> m;
  int ans=0;
for(int i = 0; i<n; i++){
int b=k-arr[i];
if (m[b]){
ans += m[b];
}
m[arr[i]]++;
}
return ans;
}
};
