
#include <bits/stdc++.h>
using namespace std;
int arr[100][100];
bool path[100][100];

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
  fast;
  int node ;
  cin>> node ;

  for(int i = 1 ; i <= node ; i++){
   for(int j = 1 ; j <= node ; j++){
      cin>> arr[i][j] ;
      path[i][j] = arr[i][j];
   }
  }

  for(int k = 1 ; k <= node ; k++){
   for(int i = 1 ; i <= node ; i++){
      for(int j = 1 ; j <= node ; j++){
         path[i][j] = path[i][j] | ( path[i][k] & path[k][j]) ;
      }
   }
  }

  for(int i = 1 ; i <= node ; i++){
   for(int j = 1 ; j <= node ; j++){
      cout<<path[i][j]<<" ";
   }cout<<endl;
  }

  return 0;
}
