// #include <unordered_map>
// #include <iostream>
// #include <vector>
// using namespace std;
//
// int main() {
//     vector<int> myvec;
//     int sizes, element;
//
//     cout << "Enter the size of Array" << endl;
//     cin >> sizes;
//
//     cout << "Enter the elements in Array" << endl;
//     for (int i = 0; i < sizes; i++) {
//         cin >> element;
//         myvec.push_back(element);
//     }
//
//     for (int i = 0; i < myvec.size(); i++) {
//         cout << myvec[i] << " "; // Adding a space for better readability
//     }
//     cout << endl; // Adding a newline at the end for cleaner output
//
//     return 0;
// }
// #include <iostream>
// using namespace std;
// using std::string;
// class Player
// {
// public:
//     string Name;
//     string Type;
//     int Age;
//     void intro()
//     {
//         cout<<"Plyaer Name is : "<<Name<<endl;
//         cout<<"Player Type is : "<<Type<<endl;
//         cout<<"Player Age is : "<<Age<<endl;
//     };
//     Player(string name,string type,int age)
//     {
//         Name=name;
//         Type=type;
//         Age=age;
//     };
//
//
// };
//
//
// int main()
// {
//     Player players=Player("Rishi","Batsmen",20);
//     players.intro();
//     // cout << "Hello, World!" << std::endl;
//     return 0;
// }
//SOME BASICS AND ATTEMPETED FIRST MIN AND MAX
// #include<iostream>
// #include<vector>
// using namespace std;
//
// // int slice(vector<int> arr,int index)
// // {
// //     vector<int> newarr;
// //     for(int i =index;i<arr.size();i++)
// //     {
// //         newarr.push_back(arr[i]);
// //     }
// //     vector<int> result(newarr.begin(), newarr.begin());
// //     return result;
// // }
//
// int finmin(vector<int> arr,int index)
// {
//     int min=arr[index];
//     for(int i=index;i<arr.size();i++)
//     {
//         // cout<<min<<endl;
//         if (arr[i]<min)
//         {
//             min=i;
//         }
//
//     }
//
//     return min;
// }
// int finmax(vector<int> arr,int index)
// {
//     int max=arr[index];
//
//     for(int i=index;i<arr.size();i++)
//     {
//         // cout<<max<<endl;
//         if (arr[i]>max)
//         {
//             max=i;
//         }
//
//     }
//
//     return max;
// }
// int main()
// {
//     int val;
//     vector<int> v={1,2,3,4,5,6,7};
//     for(int i=0;i<v.size();i++)
//     {
//         if (i%2==0)
//         {
//             val= finmax(v,i);
//             int index1 = val;            // Index of the first element
//             int index2 = i;
//             int temp = v[index1];
//             v[index1] = v[index2];
//             v[index2] = temp;
//             // cout<<v[index1]<<v[index2]<<endl;
//
//
//
//         }
//         else
//         {
//            val= finmin(v,i);
//             int index1 = val;            // Index of the first element
//             int index2 = i;
//             int temp = v[index1];
//             v[index1] = v[index2];
//             v[index2] = temp;
//
//         }
//     }
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<endl;
//     }
//
//     // vector<int> answer;
//
//
//
//     // vector<pair<int,int>> vec;
//     // vector<int>::iterator it;
//     // for (it=v.begin(); it!=v.end();it++)
//     // {
//     //     cout<<*it<<endl;
//     // }
//
//     // v.erase(v.begin()+2);
//     // for(auto element:v)
//     // {
//     //     cout<<element<<endl;
//     // }
//     // for(int i=0;i<v.size();i++)
//     // {
//     //     vec.push_back(make_pair(v[i],i));
//     // }
//     // for(int i=0;i<vec.size();i++)
//     // {
//     //     cout<<vec[i].first<<" "<<vec[i].second<<endl;
//     // }
//
//
//
// return 0;
// }
// FIRST MAXIMUNM AND SECOND MINIMUN WITHOUT SORTING AND NEW ARRAY
// #include <iostream>
// #include <vector>
// using namespace std;
//
// int finmin(const vector<int>& arr, int index) {
//     int minIndex = index;
//     for (int i = index; i < arr.size(); i++) {
//         if (arr[i] < arr[minIndex]) {
//             minIndex = i;
//         }
//     }
//     return minIndex;
// }
//
// int finmax(const vector<int>& arr, int index) {
//     int maxIndex = index;
//     for (int i = index; i < arr.size(); i++) {
//         if (arr[i] > arr[maxIndex]) {
//             maxIndex = i;
//         }
//     }
//     return maxIndex;
// }
//
// int main() {
//     int val;
//     vector<int> v = {1, 2, 3, 4, 5, 6, 7};
//     for (int i = 0; i < v.size(); i++) {
//         if (i % 2 == 0) {
//             val = finmax(v, i);
//             int index1 = val;          // Index of the found maximum element
//             int index2 = i;            // Index of the current position
//             // Swap elements
//             int temp = v[index1];
//             v[index1] = v[index2];
//             v[index2] = temp;
//         } else {
//             val = finmin(v, i);
//             int index1 = val;          // Index of the found minimum element
//             int index2 = i;            // Index of the current position
//             // Swap elements
//             int temp = v[index1];
//             v[index1] = v[index2];
//             v[index2] = temp;
//         }
//     }
//
//     // Print the vector after swapping
//     for (int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
//
//     return 0;
// }
//TWO SUM USING AUTO SORT
// #include <algorithm>
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> twosum(vector<int> question,int target)
// {
//     vector<pair<int,int>> pairindex;
//     for(int i=0;i<question.size();i++)
//     {
//         pairindex.push_back({question[i],i});
//     }
//     sort(pairindex.begin(),pairindex.end());
//     int first =0;
//     int last= pairindex.size()-1;
//     while(last>first)
//     {
//         if(pairindex[first].first+pairindex[last].first==target)
//         {
//             vector<int> result= {pairindex[first].second,pairindex[last].second};
//             return result;
//         }
//         if(pairindex[first].first+pairindex[last].first>target)
//         {
//             last-=1;
//         }
//         else
//         {
//             first+=1;
//         }
//     }
//     return{};
//
// }
// int main()
// {
//     vector<int> question={1,2,3,4,7,6,9};
//     int target=8;
//    vector<int> result =twosum(question,target);
//    for(int i=0;i<result.size();i++)
//    {
//        cout<<result[i]<<endl;
//    }
//
//     return 0;
// }
//QUICKSORT WITH PAIRS
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<pair<int,int>> quicksort(vector<pair<int,int>>& nums) {
//     if (nums.size() <= 1) {
//         return nums;
//     }
//
//     int pivotIndex = nums.size() / 2;
//     int pivot = nums[pivotIndex].first;
//
//     vector<pair<int,int>> left;
//     vector<pair<int,int>> middle;
//    vector<pair<int,int>> right;
//
//     for (int i = 0; i < nums.size(); i++) {
//         if (nums[i].first < pivot) {
//             left.push_back(nums[i]);
//         } else if (nums[i].first == pivot) {
//             middle.push_back(nums[i]);
//         } else {
//             right.push_back(nums[i]);
//         }
//     }
//
//     vector<pair<int,int>> sortedLeft = quicksort(left);
//     vector<pair<int,int>> sortedRight = quicksort(right);
//
//     vector<pair<int,int>> result;
//     result.insert(result.end(), sortedLeft.begin(), sortedLeft.end());
//     result.insert(result.end(), middle.begin(), middle.end());
//     result.insert(result.end(), sortedRight.begin(), sortedRight.end());
//
//     return result;
// }
// vector<int> quicksort(vector<int> nums)
// {
//     if(nums.size()<1)
//     {
//         return nums;
//     }
//     int pivot = nums[nums.size()/2];
//     vector<int> middle;
//     vector<int> right;
//     vector<int> left;
//     for(int i ;i<nums.size();i++)
//     {
//         if(nums[i]>pivot)
//         {
//             right.push_back(nums[i]);
//         }
//         if(nums[i]==pivot)
//         {
//             middle.push_back(nums[i]);
//         }
//         else
//         {
//             left.push_back(nums[i]);
//         }
//
//         return quicksort(left)+middle+quicksort(right);
//     }
// }
// int main()
// {
//     vector<int> nums={1,6,5,7,3};
//     vector<pair<int,int>> pairs;
//     for(int i=0;i<nums.size();i++)
//     {
//         pairs.push_back({nums[i],i});
//     }
//
//   vector<pair<int,int>> result=quicksort(pairs);
//     for(int i=0;i<result.size();i++)
//     {
//         cout<<result[i].first<<" ";
//     }
//     cout<<endl;
//
//     return 0;
// }
//BEST TIME TO SELL AND BUY STOCK
// #include<iostream>
// #include<vector>
// using namespace std;
// int BuyAndSell(vector<int> stocks)
// {
//     int sell=stocks[stocks.size()-1];
//     int profit=0;
//     for(int i=stocks.size()-2;i>-1;i--)
//     {
//         // cout<<i;
//         // cout<<stocks[i]<<profit;
//       if (stocks[i]>sell)
//       {
//           sell=stocks[i];
//       }
//         else
//         {
//             int temp= sell-stocks[i];
//             if (temp>profit)
//             {
//                 profit=temp;
//             }
//         }
//     }
//     return profit;
// }
//
// int main()
// {
//     vector<int> stocks={7,1,5,3,6,4};
//     int result = BuyAndSell(stocks);
//     cout<<"Maximum Profit is "<<result;
// }
//CONTAINS DUPLICATES(Done by hashmap)
// #include<iostream>
// #include <unordered_map>
// #include<vector>
// using namespace  std;
// bool duplicate(const vector<int> &nums)
// {
//     unordered_map<int,int> hashmap;
//     for(int num:nums)
//     {
//         if(hashmap[num]>0)
//         {
//             return true;
//         }
//         hashmap[num]++;//Inser value like dictionary in python hashmap[key]=value;
//     }//To delete a key-value pair hashmap.erase(key);
//     return false;
// }
//
// int main()
// {
//     bool result;
//     vector<int> nums={2,2,1,3};
//    result=duplicate(nums);
//     if(result)
//     {
//         cout<<"Duplicates Exist";
//     }
//     else
//     {
//         cout<<"All Elements Are Unique";
//     }
// }
//PRODUCT OF ARRAY EXCEPT SELF WITH DIVISON
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> restmulit(vector<int> array,int mulitall,int zeroindex)
// {
//     vector<int> result ;
//     if (zeroindex != -1)
//     {
//      for(int i=0;i<array.size();i++)
//      {
//          if(i==zeroindex)
//          {
//              result.push_back(mulitall);
//          }
//          else
//          {
//              result.push_back(0);
//          }
//      }
//     }
//     else
//     {
//         for(int num: array)
//         {
//             result.push_back(mulitall/num);
//         }
//     }
//     return result;
// }
//
// int main()
// {
//     vector<int> array={-1,1,0,-3,3};
//     int allmulit=1;
//     int zerocount=0;
//     int zeroindex=-1;
//     for(int i=0;i<array.size();i++)
//     {
//         if(array[i]!=0)
//         {
//             allmulit=allmulit*array[i];
//         }
//         else if(array[i]==0)
//         {
//             zerocount++;
//             // cout<<zerocount<<endl;
//             if(zerocount>1)
//             {
//                 cout<<"Whole array are Zeros";
//                 break;
//             }
//             zeroindex=i;
//             // cout<<"ZERO SPOTTED";
//         }
//     }
//     vector<int> result = restmulit(array,allmulit,zeroindex);
//     for(int i=0;i<result.size();i++)
//     {
//         cout<<result[i]<<" ";
//     }
//     return 0;
// }
//PRODUCT OF ARRAY EXCEPT SELF WITHOUT DIVISON
// #include <iostream>
// #include <vector>
// using namespace std;
//
// vector<int> productExceptSelf(const vector<int>& nums) {
//     int n = nums.size();
//     vector<int> result(n, 1);
//
//     // Calculate prefix products
//     int prefix = 1;
//     for (int i = 0; i < n; ++i) {
//         result[i] = prefix;
//         prefix *= nums[i];
//     }
//
//     // Calculate suffix products and multiply with prefix products
//     int suffix = 1;
//     for (int i = n - 1; i >= 0; --i) {
//         result[i] *= suffix;
//         suffix *= nums[i];
//     }
//
//     return result;
// }
//
// int main() {
//     vector<int> nums = {-1, 1, 0, -3, 3};
//     vector<int> result = productExceptSelf(nums);
//
//     for (int val : result) {
//         cout << val << " ";
//     }
//     cout << endl;
//
//     return 0;
// }
//LONGEST SUBARRAY WITH SUM K (ONLY POSITIVES)
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int> nums={1,2,3,4,5,4,3,2};
//     int k=6;
//     int start=0;
//     int currsum=0;
//     int maxlength=0;
//     for(int i=0;i<nums.size();i++)
//     {
//         currsum+=nums[i];
//         while(currsum>k)
//         {
//             currsum-=nums[start];
//             start++;
//         }
//         if(currsum==k && i-start>maxlength)
//         {
//              maxlength=i-start+1;
//         }
//     }
//     cout<<maxlength<<endl;
// return 0;
// }
//MAXIMUM SUBARRAY SUM
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> nums={5,4,-1,7,8};
//     int currsum=0;
//     int maxsum=nums[0];
//     for(int i=0;i<nums.size();i++)
//     {
//         currsum+=nums[i];
//         if(currsum>maxsum)
//         {
//             maxsum=currsum;
//         }
//         if (currsum<0)
//         {
//             currsum=0;
//         }
//     }
// cout<<maxsum;
// }
//MAXIMUM PRODUCT SUBARRAY
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
//
// int main() {
//     vector<int> nums = {3, 4, -1, 3, -5, 0, 4};
//
//     if (nums.empty()) return 0; // Handle empty array case
//
//     int currmin = nums[0];
//     int currmax = nums[0];
//     int maxprod = nums[0];
//
//     for (int i = 1; i < nums.size(); ++i) {
//         int n = nums[i];
//         if (n < 0) {
//             // Swap currmax and currmin when n is negative
//             swap(currmax, currmin);
//         }
//
//         // Update currmax and currmin
//         currmax = (currmax * n > n) ? currmax * n : n;
//         currmin = (currmin * n < n) ? currmin * n : n;
//
//         // Update the overall maximum product
//         maxprod = (currmax > maxprod) ? currmax : maxprod;
//     }
//
//     cout << maxprod;
//     return 0;
// }
//SEARCHING AN ELEMENT IN AN ROTATED SORTED ARRAY WITH O(LOG n) Time
// #include<iostream>
// #include<vector>
// using namespace std;
// int findmin(vector<int> array)
// {
//     int l=0;
//     int r=array.size()-1;
//     while(l<r)
//     {
//         int mid = (l+r)/2;
//         if(array[mid]>array[r])
//         {
//             l=mid+1;
//         }
//         else
//         {
//             r=mid;
//         }
//     }
//     return l;
// }
// int main()
// {
//     vector<int> nums={4,5,6,0,1,2,3};
//     int l=0;
//     int r=nums.size()-1;
//     int target=3;
//     int min = findmin(nums);
//     if (min==0){
//         l=0;
//         r=nums.size()-1;
//     }
//     else if(target>=nums[0]&& target<=nums[min-1]){
//            l=0;
//         r=min-1;
//     }
//     else
//     {
//         l=min;
//         r=nums.size()-1;
//     }
//     while(l<=r)
//     {
//         int m=(l+r)/2;
//         if(nums[m]==target)
//         {
//             cout<<m;
//             break;
//         }
//         else if(nums[m]<target)
//         {
//             l=m+1;
//         }
//         else
//         {
//             r=m-1;
//         }
//     }
// // cout<<-1;
// }
//3 SUM
// #include <iostream>
// #include <vector>
// #include <algorithm> // For std::sort
// using namespace std;
//
// vector<vector<int>> threeSum(vector<int>& nums) {
//     vector<vector<int>> triplets;
//     if (nums.size() < 3) return triplets;
//
//     sort(nums.begin(), nums.end()); // Sort the array
//
//     for (int i = 0; i < nums.size() - 2; ++i) {
//         // Skip duplicate values for the first number
//         if (i > 0 && nums[i] == nums[i - 1]) continue;
//
//         int left = i + 1;
//         int right = nums.size() - 1;
//
//         while (left < right) {
//             int sum = nums[i] + nums[left] + nums[right];
//             if (sum == 0) {
//                 triplets.push_back({nums[i], nums[left], nums[right]});
//                 // Skip duplicate values for the second number
//                 while (left < right && nums[left] == nums[left + 1]) ++left;
//                 // Skip duplicate values for the third number
//                 while (left < right && nums[right] == nums[right - 1]) --right;
//                 ++left;
//             } else if (sum < 0) {
//                 ++left;
//             } else {
//                 --right;
//             }
//         }
//     }
//     return triplets;
// }
//
// int main() {
//     vector<int> nums = {-1, 0, 1, 2, -1, -4};
//     vector<vector<int>> result = threeSum(nums);
//
//     for (const auto& triplet : result) {
//         for (int num : triplet) {
//             cout << num << " ";
//         }
//         cout << endl;
//     }
//
//     return 0;
// }
//2 SUM WITH HASHMAP
// #include<iostream>
// #include <unordered_map>
// #include<vector>
// using namespace std;
// vector<int> twoSum(vector<int> nums,int target)
// {
//     vector<int> result;
//     unordered_map<int,int> hashmap;
//     for(int i=0;i<nums.size();++i)
//     {
//         int n=nums[i];
//         int complement = target-n;
//         auto it = hashmap.find(complement);
//         if (it != hashmap.end()) {
//             // Found the complement, return the result
//             result.push_back(it->second);// The value stored is the index of the complement
//             result.push_back(i);
//
//             return result;
//         }
//         hashmap[n] = i;
//     }
//     return result;
// }
// int main()
// {
//     vector<int> nums={1,2,4,3,5,7,5};
//     int target=3;
//     vector<int> result=twoSum(nums,target);
//     for(int num:result)
//     {
//         cout<<num<<" ";
//     }
//     return 0;
// }
//CODE TO UNDERSTAND HASHMAP
// #include <iostream>
// #include <unordered_map>
// using namespace std;
//
// int main() {
//     unordered_map<int, string> myMap = {
//         {1, "one"},
//         {2, "two"},
//         {3, "three"}
//     };
//
//     // Delete elements with a value containing the letter 'o'
//     for (auto it = myMap.begin(); it != myMap.end(); ) {
//         if (it->second.find('o') != string::npos) {
//             it = myMap.erase(it); // erase returns the next iterator
//         } else {
//             ++it; // move to the next element
//         }
//     }
//
//     // Display the contents of the map
//     for (const auto& pair : myMap) {
//         cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
//     }
//
//     return 0;
// }
//DECIMAL TO BINARY CONVERSAION
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
// int number=7;
//     vector<int> bits;
// while(number!=0)
// {
//     bits.push_back(number%2);
//     number=number/2;
// }
//     reverse(bits.begin(),bits.end());
//     for(int i=0;i<bits.size();i++)
//     {
//         cout<<bits[i]<<" ";
//     }
// return 0;
// };
//SET UNIT MATRIX ZERO
// #include<iostream>
// #include<vector>
// using namespace  std;
// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix,int n ,int m)
// {
//     int zerocol=1;
//     for(int i =0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             if(matrix[i][j]==0)
//             {
//                 matrix[0][j]=0;
//                 if(j!=0)
//                 {
//                     matrix[i][0]=0;
//                 }
//                 else
//                 {
//                     zerocol=0;
//                 }
//             }
//
//         }
//     }
//     for(int i=1;i<n;i++)
//     {
//         for(int j=1;j<m;j++)
//         {
//             if(matrix[i][j]!=0)
//             {
//                 if(matrix[i][0]==0 || matrix[0][j]==0)
//                 {
//                     matrix[i][j]=0;
//                 }
//             }
//         }
//     }
//     if(matrix[0][0]==0)
//     {
//         for(int j=0;j<m;j++)
//         {
//             matrix[0][j]=0;
//         }
//     }
//     if(zerocol==0)
//     {
//         for(int i=0;i<n;i++)
//         {
//             matrix[i][0]=0;
//         }
//     }
//     return matrix;
// }
// int main()
// {
//     vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<vector<int>> ans = zeroMatrix(matrix, n, m);
//
//     cout << "The Final matrix is: \n";
//     for (auto it : ans) {
//         for (auto ele : it) {
//             cout << ele << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }
//STRINGS
//LONGEST SUBSTRING WITHOUT REPEATING CHARACTERS
// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int lengthOfLongestSubstring(string s) {
//     unordered_map<char, int> hashmap;
//     int result = 0;
//     int start = 0;
//     if(s.size()==0){
//         return 0;
//     }
//     if (s.size()==1){
//         return 1;
//     }
//
//     for (int i = 0; i < s.size(); i++) {
//         if (hashmap.find(s[i]) != hashmap.end())
//         {
//             start=hashmap[s[i]]+1;
//         }
//         hashmap[s[i]] = i;
//         result = max(result, i-start+1);
//     }
//
//     return result;
// }
// int main()
// {
//     string s= "bacdezb";
//     int result;
//     result=lengthOfLongestSubstring(s);
//     cout<<result;
//     return 0;
// }
//Check if it is a palindrom integer
// #include<iostream>
// using namespace std;
// bool is_palindrom(int num)
// {
//     if(num<0)
//     {
//         return false;
//     }
//     int temp=0;
//     int temp1=num;
//     while(temp1 !=0)
//     {
//         int d=temp1%10;
//         temp=temp*10+d;
//         temp1/=10;
//     }
//     if(temp==num)
//     {
//         return true;
//     }
//     return false;
// }
// int main(){
//     int num= 121;
//     bool result= is_palindrom(num);
//     if(result==0)
//     {
//         cout<<"Not a Palindrome"<<endl;
//     }
//         cout<<"PALINDROME";
//
//     return 0;
// }
//ANAGRAM OR NOT
// #include <iostream>
// #include <unordered_map>
// #include <string>
//
// using namespace std;
//
// // Function to check if two strings are anagrams
// bool is_anagram(const string& s1, const string& s2) {
//     // Frequency maps for both strings
//     unordered_map<char, int> string1, string2;
//
//     // Count the frequency of each character in s1
//     for (char c : s1) {
//         string1[c]++;
//     }
//
//     // Count the frequency of each character in s2
//     for (char c : s2) {
//         string2[c]++;
//     }
//
//     // Compare the frequency maps
//     if (string1.size() != string2.size()) return false;
//
//     for (const auto& pair : string1) {
//         char key = pair.first;
//         int value = pair.second;
//         if (string2.find(key) == string2.end() || string2[key] != value) {
//             return false;
//         }
//     }
//
//     return true;
// }
//
// int main() {
//     string s1 = "anagram";
//     string s2 = "nagaraml";
//
//     bool result = is_anagram(s1, s2);
//     if (result) {
//         cout << "Anagram" << endl;
//     } else {
//         cout << "Not an Anagram" << endl;
//     }
//
//     return 0;
// }
//VALID PARANTHESIS
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;
// int is_valid_paranthesis(string s)
// {
//     unordered_map<char,char> hashmap={{')','('},{']','['},{'}','{'}};
//     vector<char> stack;
//     for(auto c:s)
//     {
//
//         if (hashmap.find(c) != hashmap.end()) {
//             // If the stack is empty or top of the stack doesn't match
//             if (stack.empty() || stack.back() != hashmap[c]) {
//                 return 1;
//             }
//             // Pop the top of the stack
//             stack.pop_back();
//         }
//         // If the current character is an opening bracket
//         else {
//             stack.push_back(c);
//         }
//     }
//     return 0;
// }
// int main()
// {
//     string s ="{{(())}}]";
//     int result=is_valid_paranthesis(s);
//     if(result==0)
//     {
//         cout<<"ITS VALID";
//     }
//     else
//     {
//         cout<<"ITS INVALID";
//     }
//     return 0;
// }
// //X PATTERN PRINTING
// #include <iostream>
// #include <string>
// using namespace std;
//
// int main() {
//     string s;
//     cin >> s;
//     int len = s.size();  // Length of the string
//
//     // Ensure the length is odd
//     if (len % 2 == 0) {
//         cout << "Length of string must be odd." << endl;
//         return 1;
//     }
//
//     // Declare the matrix
//     char a[len][len];
//
//     // Initialize the matrix with spaces
//     for (int i = 0; i < len; ++i) {
//         for (int j = 0; j < len; ++j) {
//             a[i][j] = ' ';
//         }
//     }
//
//     // Fill the matrix to form the "X" pattern
//     for (int i = 0; i < len; ++i) {
//         a[i][i] = s[i];                // Main diagonal
//         a[i][len - i - 1] = s[len-i-1];      // Anti-diagonal
//     }
//
//     // Print the matrix
//     for (int i = 0; i < len; ++i) {
//         for (int j = 0; j < len; ++j) {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
//
//     return 0;
// }
//SNAKE PATTERN
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cin >> n;  // Input number of elements to fill in the matrix
//
//     // Determine the size of the matrix (must be large enough to fit n elements)
//     int size = 0;
//     while (size * size < n) {
//         ++size;
//     }
//
//     // Declare the matrix
//     int a[size][size] = {0};  // Initialize all elements to 0
//
//     // Fill the matrix in a snake pattern
//     int value = 1;
//     for (int i = 0; i < size && value <= n; ++i) {
//         if (i % 2 == 0) {
//             // Fill left to right
//             for (int j = 0; j < size && value <= n; ++j) {
//                 a[i][j] = value++;
//             }
//         } else {
//             // Fill right to left
//             for (int j = size - 1; j >= 0 && value <= n; --j) {
//                 a[i][j] = value++;
//             }
//         }
//     }
//
//     // Print the matrix
//     for (int i = 0; i < size; ++i) {
//         for (int j = 0; j < size; ++j) {
//             if (a[i][j] == 0) {
//                 cout << "  ";  // Print spaces for empty cells
//             } else {
//                 cout << a[i][j] << " ";
//             }
//         }
//         cout << endl;
//     }
//
//     return 0;
// }
//Snake Pattern without if's
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cin >> n;  // Input number of elements to fill in the matrix
//
//     // Determine the size of the matrix (must be large enough to fit n elements)
//     int size = 0;
//     while (size * size < n) {
//         ++size;
//     }
//
//     // Declare the matrix
//     int a[size][size] = {0};  // Initialize all elements to 0
//
//     // Fill the matrix in a snake pattern
//     int value = 1;
//     for (int i = 0; i < size; ++i) {
//         for (int j = 0; j < size; ++j) {
//             // Calculate column index based on row parity using arithmetic
//             int col = (i % 2 == 0) * j + (i % 2 == 1) * (size - j - 1);
//             // Assign value if within bounds
//             a[i][col] = (value <= n) * value;
//             value += (value < n);  // Increment value only if within bounds
//         }
//     }
//
//     // Print the matrix
//     for (int i = 0; i < size; ++i) {
//         for (int j = 0; j < size; ++j) {
//             cout << (a[i][j] ? a[i][j] : ' ') << " ";  // Print spaces for empty cells
//         }
//         cout << endl;
//     }
//
//     return 0;
// }
//RIGHT Angle Triangel pattern
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n = 4;  // Number of rows
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= i; ++j) {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }
//Inverted right angel triangle
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n = 4;  // Number of rows
//     for (int i = n; i >= 1; --i) {
//         for (int j = 1; j <= i; ++j) {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }
//LEFT ANGLED TRIANGLE
// 1
// 22
// 333
// 4444
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n = 4;  // Number of rows
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= i; ++j) {
//             cout << i;
//         }
//         cout << endl;
//     }
//     return 0;
// }
//PYRAMID TRIANGLE
//    1
//   121
//  12321
// 1234321
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n = 4;  // Number of rows
//     for (int i = 1; i <= n; ++i) {
//         // Print leading spaces
//         for (int j = 1; j <= n - i; ++j) {
//             cout << " ";
//         }
//         // Print increasing numbers
//         for (int j = 1; j <= i; ++j) {
//             cout << j;
//         }
//         // Print decreasing numbers
//         for (int j = i - 1; j >= 1; --j) {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }
//DIAMOND PATTERN
//    1
//   121
//  12321
// 1234321
//  12321
//   121
//    1
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n = 4;  // Number of rows for the upper half (excluding the middle line)
//
//     // Upper half including the middle line
//     for (int i = 1; i <= n; ++i) {
//         // Print leading spaces
//         for (int j = 1; j <= n - i; ++j) {
//             cout << " ";
//         }
//         // Print increasing numbers
//         for (int j = 1; j <= i; ++j) {
//             cout << j;
//         }
//         // Print decreasing numbers
//         for (int j = i - 1; j >= 1; --j) {
//             cout << j;
//         }
//         cout << endl;
//     }
//
//     // Lower half
//     for (int i = n - 1; i >= 1; --i) {
//         // Print leading spaces
//         for (int j = 1; j <= n - i; ++j) {
//             cout << " ";
//         }
//         // Print increasing numbers
//         for (int j = 1; j <= i; ++j) {
//             cout << j;
//         }
//         // Print decreasing numbers
//         for (int j = i - 1; j >= 1; --j) {
//             cout << j;
//         }
//         cout << endl;
//     }
//
//     return 0;
// }
//GROUP OF ANAGRAMS
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;
// int main()
// {
//  unordered_map<int,vector<string>> hashmap;
//  vector<string> strings={"eat", "tea", "tan", "ate", "nat", "bat"};
//  int count=0;
//  for(int i=0;i< strings.size();i++)
//  {
//   count=0;
//    string str=(strings[i]);
//      for(int j=0;j<str.size();j++)
//      {
//          int asciivalue=static_cast<int>(str[j]);
//          count+=asciivalue;
//      }
//
//     hashmap[count].push_back(str);
//  }
//  // int i=0;
//  for(auto &pair:hashmap)
//  {
//   for(auto &string:pair.second)
//   {
//    cout<<string<<endl;
//   }
//  }
//  return 0;
// }
// CHECK PALINDROME STRING
// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
//
// bool isPalindrome(string s)
// {
//  string original;
//  string cleanedstring;
//
//  for (auto& str : s)
//  {
//   int ascii = static_cast<int>(tolower(str));
//
//   if ((ascii >= 97 && ascii <= 122) || (ascii >= 48 && ascii <= 57))
//   {
//    cleanedstring += tolower(str);
//
//   }
//  }
//  original = cleanedstring;
//  reverse(cleanedstring.begin(), cleanedstring.end());
//  if (cleanedstring == original)
//  {
//   return true;
//  }
//  return false;
// }
//
// int main()
// {
//  bool result;
//  string s = "A man, a plan, a canal: Panama";
//  result = isPalindrome(s);
//  cout << (result ? "PALINDROME" : "NOT A PALINDROME");
//  return 0;
// }
//LONGEST PALINDROMIC SUBSTRING(Need To Take A Look Again)
// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
//
// class Solution {
// public:
//     vector<pair<string,int>> longestPalindrome(string s) {
//         int val=0;
//         vector<pair<string,int>> result ;
//         if (s.empty()) return result;
//
//         int start = 0; // Start index of the longest palindromic substring
//         int maxLength = 1; // Length of the longest palindromic substring
//
//         for (int i = 0; i < s.size(); ++i) {
//             // Check for odd-length palindromes
//             vector<pair<int,int>> len1 = expandAroundCenter(s, i, i);
//
//                 val+=len1[0].second;
//
//             // Check for even-length palindromes
//             vector<pair<int,int>> len2 = expandAroundCenter(s, i, i + 1);
//
//                 val+=len2[0].second;
//
//
//             // Find the maximum length palindrome
//             int len = max(len1[0].first, len2[0].first);
//             if (len > maxLength) {
//                 maxLength = len;
//                 start = i - (maxLength - 1) / 2;
//             }
//         }
//
//         result.push_back({s.substr(start, maxLength),val});
//         return result;
//     }
//
// private:
//     vector<pair<int,int>> expandAroundCenter(const string& s, int left, int right)
//     {
//         int val=0;
//         while (left >= 0 && right < s.size() && s[left] == s[right]) {
//             val++;
//             --left;
//             ++right;
//         }
//         vector<pair<int,int>> result;
//         result.push_back({right-left-1,val});
//         return result; // Length of the current palindrome
//     }
// };
//
// int main() {
//     Solution sol;
//     string s = "babad";
//     vector<pair<string,int>> result = sol.longestPalindrome(s);
//     cout << "Longest Palindromic Substring: " << result[0].first << endl;
//     cout<<"Total No of SubPalindromes:  "<<result[0].second<<endl;
//     return 0;
// }
//WORD SEARCH(RECURSIVE DFS)
// #include <iostream>
// #include <vector>
// #include <string>
//
// using namespace std;
//
// // Helper function to perform DFS
// bool dfs(vector<vector<char>>& board, const string& word, int index, int x, int y) {
//     // Check if we have found the word
//     if (index == word.size()) return true;
//
//     // Check boundaries and character match
//     if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size() || board[x][y] != word[index]) {
//         return false;
//     }
//
//     // Save the current cell's character and mark it as visited
//     char temp = board[x][y];
//     board[x][y] = '#';
//
//     // Explore all possible directions (up, down, left, right)
//     bool found = dfs(board, word, index + 1, x + 1, y) ||
//                  dfs(board, word, index + 1, x - 1, y) ||
//                  dfs(board, word, index + 1, x, y + 1) ||
//                  dfs(board, word, index + 1, x, y - 1);
//
//     // Restore the cell's character and backtrack
//     board[x][y] = temp;
//
//     return found;
// }
//
// // Function to search for a word in the board
// bool wordSearch(vector<vector<char>>& board, const string& word) {
//     if (board.empty() || board[0].empty()) return false;
//
//     int rows = board.size();
//     int cols = board[0].size();
//
//     // Try to find the word starting from each cell
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             if (dfs(board, word, 0, i, j)) return true;
//         }
//     }
//
//     return false;
// }
//
// int main() {
//     vector<vector<char>> board = {
//         {'A', 'B', 'C', 'E'},
//         {'S', 'F', 'C', 'S'},
//         {'A', 'D', 'E', 'E'}
//     };
//
//     string word = "ABCCES";
//
//     if (wordSearch(board, word)) {
//         cout << "Word found in the board!" << endl;
//     } else {
//         cout << "Word not found in the board." << endl;
//     }
//
//     return 0;
// }
//Remove Invalid Paranthesis
// #include <iostream>
// #include <vector>
// using namespace std;
//
// #include <iostream>
// #include <vector>
// using namespace std;
//
// vector<char> is_paranthesis(const string& s) {
//     vector<char> svector(s.begin(), s.end());
//     vector<char> stack;
//
//     // Process the string
//     for (int i = 0; i < svector.size(); ++i) {
//         if (svector[i] == '(') {
//             stack.push_back(i); // Store the index of '('
//         } else if (svector[i] == ')') {
//             if (stack.empty()) {
//                 // Unmatched closing parenthesis
//                 svector[i] = '1';
//             } else {
//                 // Matched parenthesis
//                 stack.pop_back();
//             }
//         }
//     }
//
//     // Mark unmatched opening parentheses
//     while (!stack.empty()) {
//         int index = stack.back(); // Get the index of unmatched '('
//         stack.pop_back();
//         svector[index] = '1'; // Mark as unmatched opening parenthesis
//     }
//
//     return svector;
// }
// int main() {
//     string s = "(a+b)";
//     vector<char> result=is_paranthesis(s);
//     for (size_t i = 0; i < result.size(); ) {
//         if (result[i] == '1') {
//             result.erase(result.begin() + i);
//             // No increment of i because we need to check the new element at index i
//         } else {
//             ++i; // Only increment if no erase happened
//         }
//     }
//     for (char ch : result) {
//         cout << ch << ' ';
//     }
//     return 0;
// }
//SHORT MERGE SORT
// #include<iostream>
// #include <vector>
// using namespace std;
//
// void merge(vector<int>& nums, int left, int mid, int right) {
//     vector<int> temp(right - left + 1);
//     int i = left, j = mid + 1, k = 0;
//
//     while (i <= mid && j <= right) {
//         temp[k++] = (nums[i] <= nums[j]) ? nums[i++] : nums[j++];
//     }
//     while (i <= mid) temp[k++] = nums[i++];
//     while (j <= right) temp[k++] = nums[j++];
//
//     for (int i = 0; i < temp.size(); ++i) {
//         nums[left + i] = temp[i];
//     }
// }
//     void mergeSort(vector<int>& nums, int left, int right) {
//         if (left >= right) return;
//
//         int mid = left + (right - left) / 2;
//         mergeSort(nums, left, mid);
//         mergeSort(nums, mid + 1, right);
//         merge(nums, left, mid, right);
//     }
//
//
//
//     vector<int> sortArray(vector<int>& nums) {
//         mergeSort(nums, 0, nums.size() - 1);
//         return nums;
//     }
// int main()
// {
//     vector<int> nums={5,4,1,2,7};
//     vector<int> result;
//     result=sortArray(nums);
//     for(int i=0;i<result.size();++i)
//     {
//         cout<<result[i];
//     }
//     cout<<endl;
//
// }
//REMOVE PALINDROM AND REVERSE THE STRING(need to try again)
// #include<iostream>
// #include<vector>
// #include<cctype>
// #include<queue>
// using namespace std;
// bool is_palindrome(string s)
// {
//     // cout<<s<<endl;
//     string temp;
//
//     for(int i=s.size()-1;i>-1;i--)
//     {
//        if(s[i]==' ')
//        {
//            continue;
//            cout<<"space spotted";
//
//        }
//         temp+=s[i];
//     }
//     // cout<<temp<<s;
//     if(temp==s)
//     {
//         return true;
//     }
//     return false;
// }
//
// string removepalindromewords(string s)
// {
//     string word;
//     string temp;
//     bool ispalindrome;
//     for(auto c:s)
//     {
//         if(c==' ')
//         {
//
//             // cout<<word<<endl;
//             ispalindrome=is_palindrome(word);
//             if(!(ispalindrome))
//             {
//                 temp+=word+' ';
//                 word.clear();
//             }
//             word.clear();
//         }
//         else
//         {
//             word+=c;
//         }
//     }
//     if(word.size() !=0)
//     {
//         if(!(is_palindrome(word))){;
//         temp+=word;
//             }
//     }
//     return temp;
//
// }
// int main()
// {
//     string res;
//     string cons;
//     string word;
//     vector<string> strings;
//     string s="I tot speak tot malayalam";
//     cons=removepalindromewords(s);
//
//     for(auto c:cons)
//     {
//         if(c==' ')
//         {
//             strings.push_back(word);
//             word.clear();
//         }
//         word+=c;
//     }
//     cout<<word<<endl;
//     if(word.size()>0)
//     {
//         strings.push_back(word);
//     }
// for(int i=strings.size()-1;i>-1;i--)
// {
//     res+=strings[i];
// }
//
//     cout<<"check"<<res;
//     return 0;
// }
//PLUS ONE
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> plusOne(vector<int>& digits) {
//         int n = digits.size();
//
//         // Check if the last digit is less than 9
//         if (digits[n - 1] < 9) {
//             digits[n - 1]++;
//             return digits;  // Return early if no carry is needed
//         }
//
//         // If the last digit is 9, we need to handle carry-over
//         int i = n - 1;
//         while (i >= 0 && digits[i] == 9) {
//             digits[i] = 0;  // Set current digit to 0
//             --i;  // Move to the next digit to the left
//         }
//
//         if (i >= 0) {
//             digits[i]++;  // Increment the next non-9 digit
//         } else {
//             // All digits were 9, so we need to insert 1 at the beginning
//             digits.insert(digits.begin(), 1);
//         }
//
//         return digits;
//     }
//     int main()
//     {
//     vector<int> result;
//     vector<int> digits={1,2,3,9};
//     result=plusOne(digits);
//     for(auto dig:digits)
//     {
//         cout<<dig;
//     }
//         return 0;
//     }
//Daily Temperatues
// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// vector<int> DailyTemperatues(vector<int> temperatures)
// {
//     vector<int> solution(temperatures.size(),0);
//     stack<int> stack;
//     int index;
//     for(int i=0;i<temperatures.size();i++)
//     {
//         while(! stack.empty()&& temperatures[i]>temperatures[stack.top()])
//         {
//             index=stack.top();
//             solution[index]=i-index;
//             stack.pop();
//         }
//         stack.push(i);
//     }
//     return solution;
// }
// int main(){
// vector<int> temperatues={73,74,75,71,69,72,76,73};
//     vector<int> solution=DailyTemperatues(temperatues);
//     for(auto s:solution)
//     {
//         cout<<s;
//     }
//     cout<<endl;
//
// return 0;
// }
//Random Pattern
// 1 7 12 16 19 21
// 2 8 13 17 20
// 3 9 14 18
// 4 10 15
// 5 11
// 6
// #include<iostream>
// using namespace std;
// int main()
// {
//     int pattern;
//     cout<<"Enter the pattern to print "<<endl;
//     cin>>pattern;
//     int p=pattern;
//     int count=1;
//
//     for(int i=0;i<pattern;i++)
//     {
//         int revcount=pattern;
//         cout<<endl;
//         count=1+i;
//         p--;
//         for(int j=0;j<=p;j++)
//         {
//             cout<<count<<" " ;
//             count+=revcount;
//             revcount--;
//
//         }
//     }
//     return 0;
// }
//String zoho question
// #include <iostream>
// #include <unordered_map>
// #include <vector>
// #include <string>
//
// using namespace std;
//
// string orderthem(string &input) {
//     unordered_map<int, string> hashmap;
//     string result, word;
//     int key = 0;
//     bool in_word = false;
//
//     // Trim leading spaces
//     int start = 0;
//     while (start < input.size() && input[start] == ' ') {
//         start++;
//     }
//     input = input.substr(start);
//
//     // Trim trailing spaces
//     int end = input.size() - 1;
//     while (end >= 0 && input[end] == ' ') {
//         end--;
//     }
//     input = input.substr(0, end + 1);
//
//     // Process the trimmed string
//     for (int i = 0; i < input.size(); i++) {
//         if (input[i] == ' ') {
//             if (in_word) {
//                 hashmap[key] = word;  // Store the word in the map
//                 word = "";
//                 key = 0;
//                 in_word = false;
//             }
//         } else {
//             if (input[i] >= '0' && input[i] <= '9') {
//                 key = key * 10 + (input[i] - '0');  // Build the key number
//             } else {
//                 word += input[i];  // Build the word
//             }
//             in_word = true;
//         }
//     }
//
//     // Handle the last word if the string doesn't end with a space
//     if (in_word) {
//         hashmap[key] = word;
//     }
//
//     // Build the result string in the correct order
//     for (int i = 0; i < hashmap.size(); i++) {
//         if (i > 0) result += " ";  // Add space between words
//         if (hashmap.find(i) != hashmap.end()) {
//             result += hashmap[i];
//         }
//     }
//
//     return result;
// }
//
// int main() {
//     string str = "          is1 This0 3Test 2a";
//     string result = orderthem(str);
//     cout << result << endl;
//     return 0;
// }
//EXCEL COLUMN TITLE AND COLUMN NUMBER
// #include<iostream>
// using namespace std;
// int my_pow(int &num,int power)
// {
//     int ans=1;
//     while(power!=0)
//     {
//         ans*=num;
//         power--;
//     }
//     // cout<<ans<<endl;
//     return ans;
//
// }
// string columnTitle(int columnNumber)
// {
//     string result;
//     while (columnNumber > 0) {
//         columnNumber--;
//         char  ch = 'A' + (columnNumber % 26);
//         result =ch+result;
//         columnNumber /= 26;
//     }
//     return result;
// }
//
//
// int columnNumber(string str)
// {
//     int result=0;
//     int n=str.size()-1;
//     int digit=26;
//     for(int i=0;i<str.size();i++){
//          result+=((str[i]-'A'+1)*my_pow(digit,n));
//          n--;
//
//     }
//     return result;
// }
// int main()
// {
//     string str="ZCZ";
//     int num= 17680;
//     int result=columnNumber(str);
//     cout<<result<<endl;
//     string title=columnTitle(num);
//     cout<<title<<endl;
//     return 0;
// }
//Random zoho pattern
// 666666
// 655556
// 654456
// 654456
// 655556
// 666666
// #include <iostream>
// using namespace std;
//
// void printPattern(int n) {
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             // Calculate the minimum distance to the borders
//             int minDist = min(min(i, j), min(n - i + 1, n - j + 1));
//             // Print the value based on the minimum distance
//             cout << n - minDist + 1;
//         }
//         cout << endl;
//     }
// }
//
// int main() {
//     int n;
//     cout << "Enter the size of the pattern:";
//     cin >> n;
//     printPattern(n);
//     return 0;
// }
//Randome zoho pattern
//Given an odd length word which should be printed from the middle of the word.
//The output should be in the following pattern
//____________g
//__________gr_
//________gra__
//______gram___
//____gramp____
//__grampr_____
//grampro______
//
// #include <iostream>
// #include <string>
// using namespace std;
// void pattern(const string& str) {
//     string reversestring;
//     if(str.size()%2==0)
//     {
//         cout<<"Cant print pattern give odd length string"<<endl;
//     }
//     int n=str.size()/2;
//     string first=str.substr(0,n);
//     string last=str.substr(n);
//     reversestring+=last;
//     reversestring+=first;
//     int len = reversestring.length();
//
//     for (int i = 1; i <= len; i++) {
//         // Print leading underscores
//         for (int j = 0; j < 2 * (len - i); j++) {
//             cout << "_";
//         }
//
//         // Print the first i characters of the string
//         for (int k = 0; k < i; k++) {
//             cout << reversestring[k];
//         }
//
//         // Print trailing underscores
//         for (int j = 1; j < i; j++) {
//             cout << "_";
//         }
//
//         cout << endl;
//     }
// }
//
// int main()
// {
//     string str;
//     cout<<"Enter the Stirng for pattern"<<endl;
//     cin>>str;
//     pattern(str);
//     return 0;
// }
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
// #include <iostream>
//
// void printDiamond(int n) {
//     int mid = n / 2;
//
//     for (int i = 0; i < n; i++) {
//         int numStars = i <= mid ? 2 * i + 1 : 2 * (n - i - 1) + 1;
//         int numSpaces = (n - numStars) / 2;
//
//         // Loop to print leading spaces
//         for (int j = 0; j < numSpaces; j++) {
//             std::cout << " ";
//         }
//
//         // Loop to print stars
//         for (int j = 0; j < numStars; j++) {
//             std::cout << "*";
//         }
//
//         // Loop to print trailing spaces (if needed)
//         // This is usually unnecessary because the trailing spaces
//         // are just the leftover from the leading spaces.
//         // Uncomment below if you specifically want to print trailing spaces.
//         // for (int j = 0; j < numSpaces; j++) {
//         //     std::cout << " ";
//         // }
//
//         // Move to the next line after printing one row
//         std::cout << std::endl;
//     }
// }
//
// int main() {
//     int n = 7; // Must be an odd number
//     printDiamond(n);
//     return 0;
// }
// 54321
//  4321
//   321
//    21
//     1
//    21
//   321
//  4321
// 54321
// #include<iostream>
// using namespace std;
// void pattern(int n) {
//     for(int i=0;i<n*2;i++) {
//         cout<<endl;
//         if(i<n) {
//             for(int s=0;s<i;s++) {
//                 // cout<<i<<n<<s;
//                 cout<<' ';
//             }
//             for(int j=n-i;j>0;j--) {
//                 cout<<j;
//             }
//         } else {
//             if(i==n*2-1) {
//                 break;
//             }
//               int num=(i-n)+2;
//               int space =n-num;
//               for(int l=0;l<space;l++) {
//                   cout<<' ';
//               }
//               while(num!=0) {
//                   cout<<num;
//                   num--;
//               }
//         }
//
//     }
//
// }
// int main() {
//     int n=7;
//     pattern(n);
//     return 0;
// }
//DIAMOND PATTERN
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *
// #include<iostream>
// #include<cmath>
// using namespace std;
// void patttern(int n) {
//     for(int i=0;i<n;i++) {
//         cout<<endl;
//         int mid =n/2;
//         int space = mid-i;
//
//         int stars=0;
//         space>=0?stars=(n-(mid+space))+i:stars=2 * (n - i - 1) + 1;
//         if(space>=0) {
//             for(int j=0;j<space;j++) {//TOPHALF LEAD SPACE
//                 cout<<' ';
//             }
//             for(int k=0;k<stars;k++) {//TOP HALF STARS
//                 cout<<'*';
//             }
//             for(int j=0;j<space;j++) {//TOP HALF TRAIL SPACE
//                 cout<<' ';
//             }
//
//         } else {
//             for(int j=space;j<0;j++) {//BOTTOM LEAD SPACE
//                 cout<<' ';
//             }
//             for(int k=0;k<stars;k++) {//BOTTOM STARS
//                 cout<<'*';
//             }
//
//             for(int j=space;j<0;j++) {//BOTTOM TRAIL SPACE
//                 cout<<' ';
//             }
//
//         }
//
//     }
//
// }
// int main() {
//     int n=9;
//     patttern(n);
//     return 0;
// }
//HOLLOW DIAMOND
//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *
// #include<iostream>
// #include<cmath>
// using namespace std;
// void patttern(int n) {
//     for(int i=0;i<n;i++) {
//         cout<<endl;
//         int mid =n/2;
//         int space = mid-i;
//
//         int stars=0;
//         space>=0?stars=(n-(mid+space))+i:stars=2 * (n - i - 1) + 1;
//         if(space>=0) {
//             for(int j=0;j<space;j++) {//TOPHALF LEAD SPACE
//                 cout<<' ';
//             }
//             for(int k=0;k<stars;k++) {//TOP HALF STARS
//                 if(k==0||k==stars-1) {
//                     cout<<'*';
//                 }
//                 else {
//                     cout<<' ';
//                 }
//             }
//             for(int j=0;j<space;j++) {//TOP HALF TRAIL SPACE
//                 cout<<' ';
//             }
//
//         } else {
//             for(int j=space;j<0;j++) {//BOTTOM LEAD SPACE
//                 cout<<' ';
//             }
//             for(int k=0;k<stars;k++) {//BOTTOM STARS
//                 if(k==0||k==stars-1) {
//                     cout<<'*';
//                 }
//                 else {
//                     cout<<' ';
//                 }
//             }
//
//             for(int j=space;j<0;j++) {//BOTTOM TRAIL SPACE
//                 cout<<' ';
//             }
//
//         }
//
//     }
//
// }
// int main() {
//     int n=9;
//     patttern(n);
//     return 0;
// }
//BUTTERFLY PATTERN
// *       *
// **     **
// ***   ***
// **** ****
// *********
// **** ****
// ***   ***
// **     **
// *       *
// #include<iostream>
// using namespace std;
// void pattern(int n) {
//     int mid=n/2;
//     for (int i = 0; i <=mid; i++) {//tophalf
//         cout<<endl;
//         for (int j = 0; j < n; j++) {
//             if(j<=i ||j>=n-i-1) {
//                 cout << '*';
//             }
//             else {
//                 cout<<' ';
//             }
//         }
//
//     }
//     for(int k=0;k<mid;k++) {//bottom half
//         cout<<endl;
//         int r=mid+k;
//         int s=n-mid-k-1;
//         for(int l=0;l<s;l++) {
//             cout<<'*';
//         }
//         for(int p=s;p<=r;p++) {
//             cout<<' ';
//         }
//         for(int w=0;w<n-r-1;w++) {
//             cout<<'*';
//         }
//
//     }
// }
//
// int main() {
//     int n=9;
//     pattern(n);
//     return 0;
// }
//HOLLOW SQUARE WITH DIAGONALS
// **********
// **      **
// * *    * *
// *  *  *  *
// *   **   *
// *   **   *
// *  *  *  *
// * *    * *
// **      **
// **********
//
// #include<iostream>
// using namespace std;
// void pattern(int n) {
//     for(int i=0;i<n;i++) {
//         cout<<endl;
//         for(int j=0;j<n;j++) {
//             if(i==0||i==n-1||j==0||j==n-1||i==j||i+j==n-1) {
//                 cout<<'*';
//                 // cout<<i<<j<<n;
//             }
//             else {
//                 cout<<' ';
//             }
//             // cout<<i<<j<<n;
//         }
//     }
// }
// int main() {
//     int n=10;
//     pattern(n);
//     return 0;
// }
//ZIG ZAG PATTERN
// 1       7
// 2    6  8
// 3  5    9
// 4       10
//SPRIAL MATRIX
// 1  2  3  4
// 12 13 14 5
// 11 16 15 6
// 10 9  8  7
//PASCALS TRIANGLE
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
//Linked List
// #include <iostream>
// using namespace std;
//
// class Node {
// public:
//     int data;
//     Node* next;
//
//     // Constructor to initialize a node
//     Node(int value) {
//         data = value;
//         next = nullptr;
//     }
// };
//
//
//
// class LinkedList {
// private:
//     Node* head;
//
// public:
//     // Constructor to initialize the head pointer
//     LinkedList() {
//         head = nullptr;
//     }
//
//     // Method to insert a node at the beginning of the list
//     void insertAtBeginning(int value) {
//         Node* newNode = new Node(value);
//         newNode->next = head;
//         head = newNode;
//     }
//
//     // Method to insert a node at the end of the list
//     void insertAtEnd(int value) {
//         Node* newNode = new Node(value);
//         if (head == nullptr) {
//             head = newNode;
//             return;
//         }
//         Node* temp = head;
//         while (temp->next != nullptr) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
//
//     // Method to delete a node by value
//     void deleteNode(int value) {
//         if (head == nullptr) {
//             cout << "List is empty!" << endl;
//             return;
//         }
//
//         // If the head node itself holds the value to be deleted
//         if (head->data == value) {
//             Node* temp = head;
//             head = head->next;
//             delete temp;
//             return;
//         }
//
//         // Search for the node to be deleted
//         Node* temp = head;
//         while (temp->next != nullptr && temp->next->data != value) {
//             temp = temp->next;
//         }
//
//         if (temp->next == nullptr) {
//             cout << "Node with value " << value << " not found!" << endl;
//             return;
//         }
//
//         Node* nodeToDelete = temp->next;
//         temp->next = temp->next->next;
//         delete nodeToDelete;
//     }
//
//     // Method to display the linked list
//     void display() {
//         Node* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << "nullptr" << endl;
//     }
// };
// int main() {
//     LinkedList list;
//
//     // Inserting nodes at the end
//     list.insertAtEnd(10);
//     list.insertAtEnd(20);
//     list.insertAtEnd(30);
//
//     // Inserting a node at the beginning
//     list.insertAtBeginning(5);
//
//     // Display the list
//     cout << "Linked List: ";
//     list.display();
//
//     // Deleting a node
//     list.deleteNode(20);
//     cout << "After deleting 20: ";
//     list.display();
//
//     // Trying to delete a node that doesn't exist
//     list.deleteNode(100);
//
//     return 0;
// }
//CYCLE EXIST IN LL
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode *slow=head;
//         ListNode *fast=head;
//         while(fast && fast->next){
//             if(fast==slow){
//                 return true;
//             }
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         return false;
//
//     }
// };
//REVERSING A LINKED LIST
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode *prev=nullptr;
//         ListNode *temp=head;
//         ListNode *next=nullptr;
//         while(temp!=nullptr){
//             next=temp->next;
//             temp->next=prev;
//             prev=temp;
//             temp=next;
//         }
//         return prev;
//     }
// };
//DELETE MIDDLE NODE OF THE LINKED LIST
// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         if(head->next==NULL){
//             return nullptr;
//         }
//         ListNode *fast=head;
//         ListNode *slow=head;
//         ListNode *temp=nullptr;
//         while(fast && fast->next){
//             temp=slow;
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         temp->next=slow->next;
//         delete slow;
//         return head;
//     }
// };
//Grandchildren
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;
// int main() {
//     vector<pair<string,string>> strings;
//     string key;
//     int grandchildcount=0;
//     unordered_map<string,vector<string>> hahsmap;
//     for(auto c:strings) {
//         hahsmap[c.first].push_back(c.second);
//     }
//     for(auto c:hahsmap) {
//         if(hahsmap.find(key)!= hahsmap.end()) {
//             vector<string> temp = hahsmap[key];
//              grandchildcount += temp.size();
//     }
//     cout<<grandchildcount;
//     return 0;
// }
//Tree Datastructure
// #include <iostream>
//
// using namespace std;
//
// class TreeNode {
// public:
//     int data;
//     TreeNode* left;
//     TreeNode* right;
//
//     TreeNode(int data) {
//         this->data = data;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// };
// class BinaryTree {
// public:
//     TreeNode* root;
//
//     BinaryTree(int rootData) {
//         root = new TreeNode(rootData);
//     }
//
//     ~BinaryTree() {
//         deleteTree(root);
//     }
//
//     void deleteTree(TreeNode* node) {
//         if (node == nullptr) return;
//
//         deleteTree(node->left);
//         deleteTree(node->right);
//
//         delete node;
//     }
//
//     void addLeftChild(TreeNode* parent, int childData) {
//         if (parent->left == nullptr) {
//             parent->left = new TreeNode(childData);
//         } else {
//             cout << "Left child already exists!" << endl;
//         }
//     }
//
//     void addRightChild(TreeNode* parent, int childData) {
//         if (parent->right == nullptr) {
//             parent->right = new TreeNode(childData);
//         } else {
//             cout << "Right child already exists!" << endl;
//         }
//     }
//
//     void printTree(TreeNode* node, int depth = 0) {
//         if (node == nullptr) return;
//
//         for (int i = 0; i < depth; ++i) cout << "--";
//         cout << node->data << endl;
//
//         printTree(node->left, depth + 1);
//         printTree(node->right, depth + 1);
//     }
// };
// int main() {
//     BinaryTree tree(1); // Create a binary tree with root node 1
//
//     TreeNode* root = tree.root;
//
//     tree.addLeftChild(root, 2);
//     tree.addRightChild(root, 3);
//
//     TreeNode* leftChild = root->left;
//     TreeNode* rightChild = root->right;
//
//     tree.addLeftChild(leftChild, 4);
//     tree.addRightChild(leftChild, 5);
//
//     tree.addLeftChild(rightChild, 6);
//     tree.addRightChild(rightChild, 7);
//
//     tree.printTree(root);
//
//     return 0;
// }
// class BinarySearchTree {
// public:
//     TreeNode* root;
//
//     BinarySearchTree() {
//         root = nullptr;
//     }
//
//     // Manual insertion without recursion
//     void insert(int data) {
//         TreeNode* newNode = new TreeNode(data);
//         if (root == nullptr) {
//             root = newNode;
//             return;
//         }
//
//         TreeNode* current = root;
//         TreeNode* parent = nullptr;
//
//         while (current != nullptr) {
//             parent = current;
//             if (data < current->data) {
//                 current = current->left;
//             } else if (data > current->data) {
//                 current = current->right;
//             } else {
//                 // If data is equal to current->data, do not insert duplicate
//                 delete newNode;
//                 return;
//             }
//         }
//
//         if (data < parent->data) {
//             parent->left = newNode;
//         } else {
//             parent->right = newNode;
//         }
//     }
//
//     // Manual search without recursion
//     bool search(int data) {
//         TreeNode* current = root;
//
//         while (current != nullptr) {
//             if (data == current->data) {
//                 return true;
//             } else if (data < current->data) {
//                 current = current->left;
//             } else {
//                 current = current->right;
//             }
//         }
//
//         return false;
//     }
//
//     // In-order traversal without recursion
//     void inorderTraversal(TreeNode* node) {
//         if (node == nullptr) return;
//
//         inorderTraversal(node->left);
//         cout << node->data << " ";
//         inorderTraversal(node->right);
//     }
//
//     void inorderTraversal() {
//         inorderTraversal(root);
//         cout << endl;
//     }
// };
//DEPTH OF A BINARY TREE
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// private:
//     int f(TreeNode* root){
//         if(root==nullptr) return 0;
//
//         int lh = 1+f(root->left);
//         int rh = 1+f(root->right);
//
//         return max(lh,rh);
//     }
// public:
//     int maxDepth(TreeNode* root) {
//         return f(root);
//     }
// };
//SPRIAL MATRIX
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> spiralOrder(vector<vector<int>>& matrix) {
//     int left=0;
//     int right=matrix[0].size();
//     int top=0;
//     int bottom=matrix.size();
//     vector<int> result;
//     while(left<right && top<bottom){
//         for(int i=left;i<=right-1;i++){
//             result.push_back(matrix[top][i]);
//         }
//         top+=1;
//         for(int i=top;i<bottom;i++){
//             result.push_back(matrix[i][right-1]);
//         }
//         right-=1;
//         if(!(left<right && top<bottom)){
//             break;
//         }
//         cout<<right<<left<<endl;
//         for(int i=right-1;i>left-1;i--){
//             result.push_back(matrix[bottom-1][i]);
//         }
//         bottom-=1;
//         for(int i=bottom-1;i>top-1;i--){
//             result.push_back(matrix[i][left]);
//         }
//         left+=1;
//     }
//     return result;
// }
//
// int main() {
//     vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
//     vector<int> result;
//     result=spiralOrder(matrix);
//     for(auto c:result) {
//         cout<<c;
//     }
//     return 0;
// }
//Array Practice
// #include<iostream>
// #include<algorithm>
// #include<cmath>
// #include<unordered_map>
// #include<vector>
// using namespace std;
// vector<vector<int>> threeSum(vector<int> nums,int sum) {
//     vector<vector<int>> triplets;
//     if (nums.size() < 3) return triplets;
//
//     sort(nums.begin(), nums.end()); // Sort the array
//
//     for (int i = 0; i < nums.size() - 2; ++i) {
//         // Skip duplicate values for the first number
//         if (i > 0 && nums[i] == nums[i - 1]) continue;
//
//         int left = i + 1;
//         int right = nums.size() - 1;
//
//         while (left < right) {
//             int currsum = nums[i] + nums[left] + nums[right];
//             if (currsum == sum) {
//                 triplets.push_back({nums[i], nums[left], nums[right]});
//                 // Skip duplicate values for the second number
//                 while (left < right && nums[left] == nums[left + 1]) ++left;
//                 // Skip duplicate values for the third number
//                 while (left < right && nums[right] == nums[right - 1]) --right;
//                 ++left;
//             } else if (currsum < sum) {
//                 ++left;
//             } else {
//                 --right;
//             }
//         }
//     }
//     return triplets;
// }
// int  searchRotatedSortedArray(vector<int>nums , int min,int target) {
//     int l;
//     int r;
//     if (min==0){
//         l=0;
//         r=nums.size()-1;
//     }
//     else if(target>=nums[0]&& target<=nums[min-1]){
//         l=0;
//         r=min-1;
//     }
//     else
//     {
//         l=min;
//         r=nums.size()-1;
//     }
//     while(l<=r)
//     {
//         int m=(l+r)/2;
//         if(nums[m]==target)
//         {
//             return m;
//         }
//         else if(nums[m]<target)
//         {
//             l=m+1;
//         }
//         else
//         {
//             r=m-1;
//         }
//     }
//     return -1;
//      }
// int findMininumInRotSorArray(vector<int> nums) {
//     int min=0;
//     for(int i=1;i<nums.size();i++) {
//         if(nums[i]<nums[min]) {
//             min=i;
//             return min;
//         }
//     }
//     return min;
// }
// int maximumProductSubarray(vector<int> nums) {
//     int maxproduct=nums[0];
//     int currmin=nums[0];
//     int currmax=nums[0];
//     for(int i=1;i<nums.size();i++) {
//         if(nums[i]<0) {
//             swap(currmax,currmin);
//         }
//         currmax=currmax*nums[i]>nums[i]? currmax*nums[i]:nums[i];
//         currmin=currmin*nums[i]>nums[i]?currmin*nums[i]:nums[i];
//
//         if(currmax>maxproduct) {
//             maxproduct=currmax;
//         }
//     }
//
//     return maxproduct;
// }
// int maximumSubarraySum(vector<int> nums) {
//     int currsum=0;
//     int maxsum=0;
//     for(auto num:nums) {
//         currsum+=num;
//         if(currsum>maxsum) {
//             maxsum=currsum;
//         }
//         if(currsum<0) {
//             currsum=0;
//         }
//     }
//     return maxsum;
// }
// vector<int> productArrayExceptSelf(vector<int> nums) {
//      int product=1;
//      vector<int> result;
//      bool zero =false;
//      bool allZero=false;
//      int zeroIndex=-1;
//      for(int i=0;i<nums.size();i++) {
//          if(nums[i]==0 && zero==true) {
//              allZero=true;
//              break;
//          }
//          if(nums[i]==0 ) {
//              zero=true;
//              zeroIndex=i;
//          }
//          else {
//              product*=nums[i];
//          }
//      }
//     if(allZero) {
//         int n=nums.size();
//         while(n-1!=0) {
//             result.push_back(0);
//             n--;
//         }
//         return result;
//     }
//     if(zero) {
//         for(int i=0;i<nums.size();i++) {
//             if(i==zeroIndex) {
//                 result.push_back(product);
//             }
//             else {
//                 result.push_back(0);
//             }
//         }
//
//         return result;
//     }
//     for(int i=0;i<nums.size();i++){
//         result.push_back(product/nums[i]);
//     }
//     return result;
// }
// bool contiansDuplicate(vector<int> nums) {
//     unordered_map<int,int> hashmap;
//     for(auto c:nums) {
//        if(hashmap.find(c) !=hashmap.end()) {
//            return true;
//        }
//         hashmap[c]=c;
//     }
//     return false;
// }
// int bestTimeToSellStock(vector<int> nums) {
//     int maxprofit=0;
//     int sell=nums[nums.size()-1];
//     for(int i=nums.size()-2;i>-1;i--) {
//         if(nums[i]>sell) {
//             sell=nums[i];
//         }
//         if(sell-nums[i]>maxprofit) {
//             maxprofit=sell-nums[i];
//         }
//
//     }
//     return maxprofit;
// }
// vector<int> twoSum(vector<int> nums,int target) {
//     vector<int> result;
//     unordered_map<int,int> hashmap;
//     for(int i=0;i<nums.size();i++) {
//         if(hashmap.find(target-nums[i]) !=hashmap.end()) {
//             result.push_back(hashmap[target-nums[i]]);
//             result.push_back(i);
//             return result;
//         }
//         hashmap[nums[i]]=i;
//     }
//     return result;
// }
// int main() {
//     vector<vector<int>> result;
//     int answer;
//     int answer2;
//     bool output;
//     vector<int> num={1,2,3,4,5};
    // result=threeSum(num,6);
    // for(int i=0;i<result.size();i++) {
    //     cout<<endl;
    //     for(int j=0;j<result.size();j++) {
    //         cout<<result[i][j];
    //     }
    // }
    // answer=findMininumInRotSorArray(num);
    // answer2=searchRotatedSortedArray(num,answer,4);
    // cout<<output;
    // answer=maximumProductSubarray(num);
    // cout<<answer2;
    // answer=maximumSubarraySum(num);
    // cout<<answer;
    // output=contiansDuplicate(num);
    // cout<<output<<endl;
    // result=productArrayExceptSelf(num);
    // int target=8;
    // result=twoSum(num,target);
    // answer=bestTimeToSellStock(num);
    // cout<<answer<<endl;
    // for(auto num:result) {
    //     cout<<num<<' ';
    // }
//     return 0;
// }
//Merge two sorted arrays without duplicates
// #include <iostream>
// #include <vector>
// #include <unordered_map>
//
// using namespace std;
//
// vector<int> mergeSortedArray(vector<int> num1, vector<int> num2) {
//     vector<int> result;
//     unordered_map<int, bool> hashmap;
//     int n = num1.size();
//     int m = num2.size();
//     int i = 0, j = 0;
//
//     while (i < n && j < m) {
//         if (num1[i] < num2[j]) {
//             if (!hashmap[num1[i]]) {
//                 result.push_back(num1[i]);
//                 hashmap[num1[i]] = true;
//             }
//             i++;
//         } else {
//             if (!hashmap[num2[j]]) {
//                 result.push_back(num2[j]);
//                 hashmap[num2[j]] = true;
//             }
//             j++;
//         }
//     }
//
//     while (i < n) {
//         if (!hashmap[num1[i]]) {
//             result.push_back(num1[i]);
//             hashmap[num1[i]] = true;
//         }
//         i++;
//     }
//
//     while (j < m) {
//         if (!hashmap[num2[j]]) {
//             result.push_back(num2[j]);
//             hashmap[num2[j]] = true;
//         }
//         j++;
//     }
//
//     return result;
// }
//
// int main() {
//     vector<int> num1 = {3, 4};
//     vector<int> num2 = {1, 1, 2, 3, 5, 6, 7};
//     vector<int> result = mergeSortedArray(num1, num2);
//
//     for (int i = 0; i<result.size(); i++) {
//         cout << result[i] << " ";
//     }
//
//     return 0;
// }
//Odds IN Ascending Even in Descending
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> nums={1,2,3,4,5,6,7};
//     vector<int> odd;
//     vector<int> even;
//     for(int i=0;i<nums.size();i++) {
//         if(i%2==0) {
//             even.push_back(nums[i]);
//         }
//         else {
//             odd.push_back(nums[i]);
//         }
//     }
//     sort(odd.begin(),odd.end());
//     sort(even.begin(),even.end());
//     int n=nums.size();
//     nums.clear();
//     int j=0;
//     int k=odd.size()-1;
//     for(int i=0;i<n;i++) {
//         if(i%2==0){
//             nums.push_back(even[j]);
//             j++;
//             continue;
//         }
//         nums.push_back(odd[k]);
//         k--;
//     }
//     for(auto num:nums) {
//         cout<<num<<" ";
//     }
//     return 0;
// }
//Adding 2 Numbers in diff arrays
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> num1={9,2,8,1,3,5,6,7,3,1,1,6};
//     vector<int> num2={7,8,4,6,2,1,9,9,7};
//     long long  number1=num1[0];
//     long long number2=num2[0];
//     for(int i=1;i<num1.size();i++) {
//         // cout<<number1<<endl;
//         number1=number1*10+num1[i];
//     }
//     for(int i=1;i<num2.size();i++) {
//         number2=number2*10+num2[i];
//     }
//     long long resultNumber=number1+number2;
//     vector<int> result;
//     cout<<number1<<endl;
//     cout<<number2<<endl;
//     cout<<resultNumber<<endl;
//     while(resultNumber !=0) {
//         int num=resultNumber%10;
//         result.push_back(num);
//         resultNumber/=10;
//     }
//    // for(auto c:result) {
//    //     cout<<c<<' ';
//    // }
//     int left=0;
//     int right=result.size()-1;
//     while(left<right) {
//         int temp=result[left];
//         result[left]=result[right];
//         result[right]=temp;
//         ++left;
//         --right;
//     }
//     for(auto c:result) {
//         cout<<c<<' ';
//     }
//     return 0;
// }
//QUICK SORT
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> quickSort(vector<int> nums) {
//     vector<int> result;
//     vector<int> left;
//     vector<int> middle;
//     vector<int> right;
//     if(nums.size()<=1) {
//         return nums;
//     }
//     int pivot= nums[nums.size()/2];
//     for(int i=0;i<nums.size();i++) {
//         if(nums[i]>pivot) {
//             right.push_back(nums[i]);
//         }
//         if(nums[i]==pivot) {
//             middle.push_back(nums[i]);
//         }
//         if(nums[i]<pivot) {
//             left.push_back(nums[i]);
//         }
//     }
//     vector<int> sortedleft=quickSort(left);
//     vector<int> sortedRight=quickSort(right);
//     result.insert(result.end(),sortedleft.begin(),sortedleft.end());
//     result.insert(result.end(),middle.begin(),middle.end());
//     result.insert(result.end(),sortedRight.begin(),sortedRight.end());
//     return result;
// }
// int main() {
//     vector<int> nums={2,4,3,1,6,8,99,6};
//     vector<int> result;
//     result=quickSort(nums);
//     for(auto c:result) {
//         cout<<c<<" ";
//     }
// }
//Sort by frequency
// #include<iostream>
// #include<unordered_map>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main() {
//     vector<int> nums={3, 4, 2, 3, 16, 3, 15, 16, 15, 15, 16, 2, 3};
//     unordered_map<int,int> hashmap;
//     unordered_map<int,vector<int>> freqmap;
//     for(int i=0;i<nums.size();i++) {
//         hashmap[nums[i]]++;
//     }
//     vector<int> frequencies;
//     for(auto freq : hashmap) {
//         freqmap[freq.second].push_back(freq.first);
//     }
//
//     for(auto freq:freqmap) {
//         frequencies.push_back(freq.first);
//     }
//     sort(frequencies.begin(),frequencies.end());
//     int n=frequencies.size()-1;
//     for(int i=n;i>n-3;i--) {
//         for(auto freq:freqmap[frequencies[i]]){
//             cout<<freq<<" ";
//         }
//     }
//     return 0;
// }
//sort 0's and 1's in single traversal
// #include<iostream>
// #include<vector>
// using namespace std;
//
// int main() {
//     vector<int> nums = {1, 1, 1, 0, 1, 0};
//     int n = nums.size();
//     int index = 0;  // Pointer for the position to place `0`s
//
//     // Iterate through the array
//     for (int i = 0; i < n; ++i) {
//         if (nums[i] == 0) {
//             // Place the `0` at the `index` position
//             swap(nums[i], nums[index]);
//             index++;
//         }
//     }
//
//     // Print the modified vector
//     for (auto num : nums) {
//         cout << num << " ";
//     }
//     cout << endl;
//
//     return 0;
// }
//Print N prime numbers
// #include <iostream>
// #include <cmath>  // For sqrt function
// using namespace std;
//
// // Function to check if a number is prime
// bool isPrime(int num) {
//     if (num <= 1) return false;  // Numbers less than or equal to 1 are not prime
//     if (num <= 3) return true;   // 2 and 3 are prime numbers
//     if (num % 2 == 0 || num % 3 == 0) return false;  // Eliminate multiples of 2 and 3
//
//     // Check for factors from 5 to sqrt(num) with 6k ± 1 optimization
//     for (int i = 5; i * i <= num; i += 6) {
//         if (num % i == 0 || num % (i + 2) == 0) return false;
//     }
//
//     return true;  // Number is prime
// }
//
// int main() {
//     int n;  // Number of primes to print
//     cout << "Enter the number of primes to print: ";
//     cin >> n;
//
//     // Print the first n prime numbers
//     int count = 0;  // Count of primes found
//     int num = 2;    // Start checking from the first prime number
//
//     while (count < n) {
//         if (isPrime(num)) {
//             cout << num << " ";  // Print the prime number
//             count++;  // Increment the count of primes found
//         }
//         num++;  // Move to the next number
//     }
//     cout << endl;  // New line after printing all primes
//
//     return 0;
// }
//MERGE SORTED ARRAY WITH 0(1) SPACE COMPLEXITY
// #include <iostream>
// #include <vector>
// using namespace std;
//
// void mergeSortedArrays(vector<int>& A, int m, vector<int>& B, int n) {
//     // Indexes for A, B, and the end of A
//     int i = m - 1;  // Last element in the initial part of A
//     int j = n - 1;  // Last element in B
//     int k = m + n - 1;  // Last index of A's total size
//
//     // Merge B into A from the end
//     while (i >= 0 && j >= 0) {
//         if (A[i] > B[j]) {
//             A[k--] = A[i--];
//         } else {
//             A[k--] = B[j--];
//         }
//     }
//
//     // Copy remaining elements of B (if any)
//     while (j >= 0) {
//         A[k--] = B[j--];
//     }
// }
//
// int main() {
//     vector<int> A = {1, 3, 5, 0, 0, 0};  // Initial elements + space for 3 more
//     vector<int> B = {2, 4, 6};            // Array to be merged
//     int m = 3;  // Number of initial elements in A
//     int n = 3;  // Number of elements in B
//
//     mergeSortedArrays(A, m, B, n);
//
//     // Print the merged array
//     for (int num : A) {
//         cout << num << " ";
//     }
//
//     return 0;
// }
//SIN Function
// #include <iostream>
// #include <cmath> // For M_PI and factorial computation
// using namespace std;
//
// // Function to compute factorial
// long long factorial(int num) {
//     long long fact = 1;
//     for (int i = 1; i <= num; ++i) {
//         fact *= i;
//     }
//     return fact;
// }
//
// // Function to compute sin(x) using Taylor series expansion
// double sinTaylor(double x, int n) {
//     double result = 0;
//     bool add = true; // To alternate between addition and subtraction
//
//     for (int i = 0; i < n; ++i) {
//         int term = 2 * i + 1; // Odd terms
//         double termValue = pow(x, term) / factorial(term);
//
//         if (add) {
//             result += termValue;
//         } else {
//             result -= termValue;
//         }
//         add = !add; // Alternate between addition and subtraction
//     }
//
//     return result;
// }
//
// int main() {
//     double x = 30;  // Input angle in degrees
//     int n = 10;     // Number of terms
//
//     // Convert degrees to radians
//     double xRadians = x * M_PI / 180;
//
//     double result = sinTaylor(xRadians, n);
//
//     cout << "sin(" << x << ") = " << result << endl;
//
//     return 0;
// }
//KADANES'S ALGORITHM
// #include <iostream>
// #include <vector>
// using namespace std;
//
// pair<int, vector<int>> maxSubarraySum(const vector<int>& nums) {
//     int n = nums.size();
//     if (n == 0) return {0, {}};
//
//     int currsum = nums[0];
//     int max_sum = nums[0];
//     int start = 0, end = 0, s = 0;
//
//     for (int i = 1; i < n; ++i) {
//         if (currsum < 0) {
//             currsum = nums[i];
//             s = i;
//         } else {
//             currsum += nums[i];
//         }
//
//         if (currsum > max_sum) {
//             max_sum = currsum;
//             start = s;
//             end = i;
//         }
//     }
//
//     vector<int> subarray(nums.begin() + start, nums.begin() + end + 1);
//     return {max_sum, subarray};
// }
//
// int main() {
//     vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};
//
//     auto result = maxSubarraySum(nums);
//     int max_sum = result.first;
//     vector<int> subarray = result.second;
//
//     cout << "Maximum sum: " << max_sum << endl;
//     cout << "Subarray with maximum sum: ";
//     for (int num : subarray) {
//         cout << num << " ";
//     }
//     cout << endl;
//
//     return 0;
// }
//SUBARRAY SUM IS K
// #include <unordered_map>
// #include <vector>
//
// int subarraySum(std::vector<int>& nums, int k) {
//     std::unordered_map<int, int> prefixSumCount;
//     prefixSumCount[0] = 1;  // Handle the case when the subarray starts from index 0
//     int cumulativeSum = 0;
//     int count = 0;
//
//     for (int num : nums) {
//         cumulativeSum += num;
//
//         // Check if there exists a subarray with sum `k`
//         if (prefixSumCount.find(cumulativeSum - k) != prefixSumCount.end()) {
//             count += prefixSumCount[cumulativeSum - k];
//         }
//
//         // Update the frequency of the current cumulative sum
//         prefixSumCount[cumulativeSum]++;
//     }
//
//     return count;
// }
//Longest Subarray with sum k
// #include <unordered_map>
// #include <vector>
// #include <iostream>
//
// void printLongestSubarrayWithSumK(const std::vector<int>& nums, int k) {
//     std::unordered_map<int, int> prefixSumIndex;
//     prefixSumIndex[0] = -1;  // To handle subarrays starting from index 0
//
//     int cumulativeSum = 0;
//     int maxLength = 0;
//     int startIdx = -1, endIdx = -1;
//
//     for (int i = 0; i < nums.size(); ++i) {
//         cumulativeSum += nums[i];
//
//         // Check if there's a subarray with sum `k`
//         if (prefixSumIndex.find(cumulativeSum - k) != prefixSumIndex.end()) {
//             int subarrayLength = i - prefixSumIndex[cumulativeSum - k];
//             if (subarrayLength > maxLength) {
//                 maxLength = subarrayLength;
//                 startIdx = prefixSumIndex[cumulativeSum - k] + 1;
//                 endIdx = i;
//             }
//         }
//
//         // Only store the first occurrence of each cumulative sum
//         if (prefixSumIndex.find(cumulativeSum) == prefixSumIndex.end()) {
//             prefixSumIndex[cumulativeSum] = i;
//         }
//     }
//
//     if (startIdx != -1 && endIdx != -1) {
//         std::cout << "The longest subarray with sum " << k << " is: [";
//         for (int i = startIdx; i <= endIdx; ++i) {
//             std::cout << nums[i];
//             if (i < endIdx) std::cout << ", ";
//         }
//         std::cout << "]\n";
//     } else {
//         std::cout << "No subarray with sum " << k << " found.\n";
//     }
// }
//
// int main() {
//     std::vector<int> nums = {1, -1, 5, -2, 3};
//     int k = 3;
//     printLongestSubarrayWithSumK(nums, k);
//
//     return 0;
// }
//Strings Practice
// #include<iostream>
// #include<unordered_map>
// #include<vector>
// using namespace std;
// int main() {
//     unordered_map<string,int> hashmap;
//     vector<string> words={ "i", "like", "sam", "sung", "samsung", "mobile", "ice",
//  "cream", "icecream", "man", "go", "mango"};
//     for(auto str:words) {
//         hashmap[str]++;
//     }
//     string str="ilikesamxung";
//     string result;
//     string curr;
//     int start=0;
//     bool is_segmented=true;
//     for(int i=0;i<str.size();i++) {
//         string strings(1,str[i]);
//         curr+=strings;
//         if(hashmap.find(curr) != hashmap.end()) {
//             result+=curr+" ";
//             space_count++;
//             curr="";
//             start=i;
//         }
//     }
//     if(curr.size()>0) {
//         is_segmented=false;
//     }
//     if(is_segmented) {
//         cout<<"True"<<endl;
//     }
//     else {
//         cout<<"Flase"<<endl;
//     }
//     cout<<result;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     string str1="asdfghij";
//     string str2="adsfgijh";
//     string result;
//     for(int i=1;i<str1.size();i++) {
//         if(str1[i]!=str2[i] && str1[i]==str2[i-1]) {
//            result+=str1[i];
//             result+=str2[i];
//             result+=" ";
//         }
//
//     }
//     cout<<result;
//     return 0;
// }
//REMOVE PALINDROME AND REVERSE THE STRING ORDER
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
//  string remomve_leading_trail(string &s) {
//      int i=0;
//      while(s[i]==' ') {
//           i++;
//      }
//      s.erase(0,i);
//      i=s.size()-1;
//      while(s[i] ==' ') {
//          i--;
//      }
//      s.erase(i+1);
//      return s;
// }
// bool is_palindrome(const string &str) {
//      int left = 0;
//      int right = str.size() - 1;
//      while (left < right) {
//          if (str[left] != str[right]) {
//              return false;
//          }
//          left++;
//          right--;
//      }
//      return true;
//  }
// using namespace std;
// int main() {
//     string str="       he knows malayalam        ";
//     string cleaned=remomve_leading_trail(str);
//     string curr;
//     string result;
//     for(int i=0;i<cleaned.size();i++) {
//
//         if(cleaned[i]==' ') {
//             curr=remomve_leading_trail(curr);
//             if(!is_palindrome(curr)) {
//                 result+=curr;
//                 result+=' ';
//             };
//             curr="";
//         }
//         curr+=cleaned[i];
//     }
//     if(!curr.empty()) {
//         curr=remomve_leading_trail(curr);
//         if(!is_palindrome(curr)) {
//             result+=curr;
//         }
//     }
//     result=remomve_leading_trail(result);
//     cout<<result;
//     return 0;
// }
//Decoding
// #include<iostream>
// #include<unordered_map>
// #include<vector>
// using namespace std;
//
// int main() {
//     string str = "121";
//     string curr;
//     int start = 0;
//     vector<int> nums;
//     vector<string> result;
//     unordered_map<int, char> numtoalpha;
//
//     // Convert the string digits to integers and store them in nums vector
//     for (int i = 0; i < str.size(); i++) {
//         int num;
//         num = str[i] - '0';
//         nums.push_back(num);
//     }
//
//     // Initial conversion of single digits to corresponding characters
//     for (int i = 0; i < nums.size(); i++) {
//         char s = 'A' + nums[i] - 1;
//         curr += s;
//         numtoalpha[nums[i]] = s;
//     }
//     result.push_back(curr); // Add the "ABA" case
//
//     // Handle combinations of two digits where possible
//     for (int i = 1; i < nums.size(); i++) {
//         curr = "";
//
//         // Add characters before the combined number
//         for (int k = 0; k < start; k++) {
//             curr += numtoalpha[nums[k]];
//         }
//
//         int num = nums[start] * 10 + nums[i]; // Combine start and current digit
//
//         if (num <= 26) {
//             curr += 'A' + num - 1; // Add the combined character
//             for (int j = i + 1; j < nums.size(); j++) { // Append remaining digits
//                 curr += numtoalpha[nums[j]];
//             }
//             result.push_back(curr); // Store the result
//         }
//
//         start++;
//     }
//
//     // Output the results
//     for (auto c : result) {
//         cout << c << " ";
//     }
//
//     return 0;
// }
//SubString With Wildcard
// #include <iostream>
// #include <string>
// using namespace std;
//
// bool isMatch(const string &s1, const string &s2) {
//     int i = 0, j = 0, starIdx = -1, match = 0;
//
//     while (i < s1.length()) {
//         // If characters match or s2 has '*', move both pointers
//         if (j < s2.length() && (s2[j] == s1[i] || s2[j] == '*')) {
//             if (s2[j] == '*') {
//                 // Record position of '*' and the match
//                 starIdx = j;
//                 match = i;
//                 j++;
//             } else {
//                 i++;
//                 j++;
//             }
//         }
//         // If there is a mismatch, and '*' was found before
//         else if (starIdx != -1) {
//             j = starIdx + 1;
//             match++;
//             i = match;
//         }
//         // Mismatch with no '*', return false
//         else {
//             return false;
//         }
//     }
//
//     // Handle remaining '*' in the second string
//     while (j < s2.length() && s2[j] == '*') {
//         j++;
//     }
//
//     return j == s2.length();
// }
//
// int main() {
//     string s1 = "Spoon", s2 = "Sp*n";
//     cout << (isMatch(s1, s2) ? "TRUE" : "FALSE") << endl;
//
//     s1 = "Zoho";
//     s2 = "*o*o";
//     cout << (isMatch(s1, s2) ? "TRUE" : "FALSE") << endl;
//
//     s1 = "Man";
//     s2 = "n*";
//     cout << (isMatch(s1, s2) ? "TRUE" : "FALSE") << endl;
//
//     s1 = "Subline";
//     s2 = "line";
//     cout << (isMatch(s1, s2) ? "TRUE" : "FALSE") << endl;
//
//     return 0;
// }
//Validate IP Address
// #include<iostream>
// using namespace std;
// bool verify_oclet(string oclet) {
//
//     int firstnum=oclet[0]-'0';
//     int oclet_num=firstnum;
//     cout<<oclet<<endl;
//     for(int i=1;i<oclet.size();i++) {
//         int num;
//         num=oclet[i]-'0';
//         oclet_num*=10;oclet_num+=num;
//         cout<<oclet_num<<endl;
//     }
//
//     if(oclet_num>0 && oclet_num<=255) {
//         return true;
//     }
//     return false;
// }
// int main() {
//     string ip=".250.1.32";
//     int dot_count=0;
//     int oclet_count=0;
//     string curr;
//     for(auto c:ip) {
//         // cout<<curr;
//         if(c=='.') {
//             if(curr.empty()) {
//                 cout<<"Flase ip";
//             }
//             if(!verify_oclet(curr)) {
//                 dot_count++;
//                 cout<<"Flase ip";
//                 break;
//             }
//             dot_count++;
//             oclet_count++;
//             curr="";
//         }
//         else {
//             curr+=c;
//         }
//
//     }
//     if(!curr.empty()) {
//         if(dot_count==3) {
//             if(verify_oclet(curr)) {
//                 oclet_count++;
//                 cout<<"Valid IP";
//             }
//             else {
//                 cout<<"False IP";
//             }
//         }
//     }
//     else {
//         cout<<"False IP";
//     }
//     return 0;
// }
//Only Reverse Vowels
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     string str="abcdef";
//     vector<char> vowels;
//     for(int i=0;i<str.size();i++) {
//         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') {
//             vowels.push_back(str[i]);
//             str[i]='_';
//         }
//     }
//     int k=vowels.size()-1;
//     for(int i=0;i<str.size();i++) {
//         if(str[i]=='_') {
//             str[i]=vowels[k];
//             k--;
//         }
//     }
//     cout<<str;
//     return 0;
// }
// #include<iostream>
// #include<unordered_map>
// using namespace std;
// string mulitply_characters(char ch ,int num) {
//     string result;
//     while(num!=0) {
//         result+=ch;
//         num--;
//     }
//     return result;
// }
// int main() {
//     string str="a1b10";
//     int num;
//     char character;
//     bool curr=false;//boolean to check previous is int or char
//     string result;
//     for(int i=0;i<str.size();i++) {
//         if(str[i]-'0'<=9 && str[i]-'0'>=0) {
//             if(curr) {
//                 num=num*10+str[i]-'0';
//             }
//             else {
//                 num=str[i]-'0';
//                 curr=true;
//             }
//         }
//         else {
//             if(character=='\0') {
//                 character=str[i];
//             }
//             else {
//                 result+=mulitply_characters(character,num);
//                 character=str[i];
//                 num=0;
//             }
//         }
//     }
//     result+=mulitply_characters(character,num);
//     cout<<result;
//     return 0;
// }
//Recursive Reverse(Reverse)
// #include<iostream>
// using namespace std;
// void recursieReverse(string str,int start,int end) {
//     if(start>end) {
//         exit(0);
//     }
//     int wordEnd=end;
//     while(wordEnd>= start && str[wordEnd]!=' ') {
//         wordEnd--;
//     }
//     for(int i=wordEnd+1;i<=end;i++) {
//         cout<<str[i];
//     }
//     if(wordEnd>start) {
//         cout<<' ';
//     }
//     recursieReverse(str,start,wordEnd-1);
// }
// int main() {
//     string str="one two three";
//     recursieReverse(str,0,str.size()-1);
//     return 0;
// }
//String kind of cleaning and stupid reverse
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     string alphadigs;
//     string str="house no : 123@ cbe";
//     vector<char> result;
//     for(int i=0;i<str.size();i++) {
//         if((str[i]-'a'<26 && str[i]-'a'>=0)||(str[i]-'0'>0 && str[i]-'0'<=9)) {
//             alphadigs+=str[i];
//             result.push_back('$');
//         }
//         else {
//             result.push_back(str[i]);
//         }
//     }
//     int n=alphadigs.size()-1;
//     for(int i=0;i<result.size();i++) {
//         if(result[i]=='$') {
//             result[i]=alphadigs[n];
//             n--;
//         }
//     }
//     for(auto n:result) {
//         cout<<n;
//     }
//     return 0;
// }
//FATHER AND SON QUESTION
// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;
//
// // Recursive function to count children at the given level
// int countChildrenAtLevel(unordered_map<string, vector<string>>& familyTree, string person, int level) {
//     // Base case: If the person is not in the tree or if level < 0
//     if (familyTree.find(person) == familyTree.end() || level < 0) {
//         return 0;
//     }
//
//     // If we are at the required level, return the number of children
//     if (level == 1) {
//         return familyTree[person].size();
//     }
//
//     // Otherwise, recursively count the children at the next level
//     int count = 0;
//     for (const string& child : familyTree[person]) {
//         count += countChildrenAtLevel(familyTree, child, level - 1); // Move to the next level
//     }
//     return count;
// }
//
// int main() {
//     // List of pairs (child, father)
//     vector<pair<string, string>> pairs = {
//         {"Ram", "Syam"},
//         {"Akil", "Syam"},
//         {"Nikil", "Ram"},
//         {"Subhash", "Ram"},
//         {"Karthik", "Akil"}
//     };
//
//     // Create a family tree using unordered_map
//     unordered_map<string, vector<string>> familyTree;
//     for (auto& p : pairs) {
//         familyTree[p.second].push_back(p.first); // Map father to child
//     }
//
//     // Input: person and level
//     string person = "Syam";
//     int level = 2;
//
//     // Find the number of children at the specified level
//     int result = countChildrenAtLevel(familyTree, person, level);
//     cout << "Number of children at level " << level << ": " << result << endl;
//
//     return 0;
// }
//Given Math Expression is valid
// #include <iostream>
// #include <stack>
// using namespace std;
//
// bool isOperator(char ch) {
//     return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
// }
//
// bool isValidExpression(const string &exp) {
//     stack<char> st;
//     int n = exp.length();
//
//     for (int i = 0; i < n; i++) {
//         char curr = exp[i];
//
//         // Check for balanced parentheses
//         if (curr == '(') {
//             st.push(curr);
//             // Check if there's an operator immediately after the opening parenthesis
//             if (i < n - 1 && (isOperator(exp[i + 1]) || exp[i + 1] == ')')) {
//                 return false;  // Invalid: operator or closing parenthesis right after opening parenthesis
//             }
//         } else if (curr == ')') {
//             if (st.empty() || st.top() != '(') {
//                 return false;  // Unbalanced parentheses
//             }
//             st.pop();
//             // Check if there's an operator right before closing parenthesis
//             if (i > 0 && isOperator(exp[i - 1])) {
//                 return false;  // Invalid: operator immediately before closing parenthesis
//             }
//         }
//
//         // Check for consecutive operators or operators at invalid positions
//         if (isOperator(curr)) {
//             if (i == 0 || i == n - 1 || isOperator(exp[i + 1])) {
//                 return false;  // Invalid: operator at start/end or consecutive operators
//             }
//         }
//
//         // Check for adjacent operands (e.g., ab without an operator between them)
//         if (isalpha(curr)) {
//             // Ensure the next character is not another operand (letter or digit) or an invalid separator (whitespace)
//             if (i < n - 1 && (isalpha(exp[i + 1]) || isdigit(exp[i + 1]) || exp[i + 1] == ' ')) {
//                 return false;  // Invalid: two operands next to each other without an operator
//             }
//         }
//     }
//
//     // If stack is not empty, it means there are unmatched opening parentheses
//     if (!st.empty()) {
//         return false;
//     }
//
//     return true;
// }
//
// int main() {
//     string expr1 = "(a+b)(a*b)";
//     string expr2 = "(ab)(ab+)";
//     string expr3 = "((a+b)";
//     string expr4 = "(a+b)(ab)";
//     string expr5 = "(a+b)(a*)";  // Invalid due to operator at the end of the first group
//     string expr6 = "(*a)(a+b)";  // Invalid due to operator at the start
//     string expr7 = "()";         // Invalid due to empty parentheses
//     string expr8 = "a b";        // Invalid: adjacent operands without operator
//     string expr9 = "(a+b))";     // Invalid: unbalanced parentheses
//
//     cout << (isValidExpression(expr1) ? "Valid" : "Invalid") << endl;
//     cout << (isValidExpression(expr2) ? "Valid" : "Invalid") << endl;
//     cout << (isValidExpression(expr3) ? "Valid" : "Invalid") << endl;
//     cout << (isValidExpression(expr4) ? "Valid" : "Invalid") << endl;
//     cout << (isValidExpression(expr5) ? "Valid" : "Invalid") << endl;
//     cout << (isValidExpression(expr6) ? "Valid" : "Invalid") << endl;
//     cout << (isValidExpression(expr7) ? "Valid" : "Invalid") << endl;  // Expected: Invalid
//     cout << (isValidExpression(expr8) ? "Valid" : "Invalid") << endl;  // Expected: Invalid
//     cout << (isValidExpression(expr9) ? "Valid" : "Invalid") << endl;  // Expected: Invalid
//
//     return 0;
// }
//Permutation of given string
// #include <iostream>
// #include <string>
// using namespace std;
//
// // Function to print all permutations of a string
// void printPermutations(string s, int l, int r) {
//     if (l == r) {
//         cout << s << " ";
//     } else {
//         for (int i = l; i <= r; i++) {
//             swap(s[l], s[i]);
//             printPermutations(s, l + 1, r);
//             swap(s[l], s[i]); // Backtrack
//         }
//     }
// }
//
// // Function to generate combinations and print their permutations
// void generateCombinations(const string &input, string current, int index) {
//     if (!current.empty()) {
//         printPermutations(current, 0, current.length() - 1); // Print permutations for each combination
//         cout << endl;
//     }
//
//     for (int i = index; i < input.length(); i++) {
//         // cout<<current;
//         generateCombinations(input, current + input[i], i + 1);
//     }
// }
//
// int main() {
//     string input = "ABc";  // Example input
//     cout << "Input: " << input << endl;
//     cout << "Output:" << endl;
//
//     // Generate all combinations of the input string
//     generateCombinations(input, "", 0);
//
//     return 0;
// }
// #include <iostream>
// #include <cmath>
// using namespace std;
//
// int countCharacters(int n) {
//     int count = 0;
//     int length = to_string(n).length(); // Number of digits in n
//
//     // Sum for numbers with fewer digits than n
//     for (int i = 1; i < length; ++i) {
//         count += i * 9 * pow(10, i - 1);
//     }
//
//     // Add digits for numbers with the same number of digits as n
//     count += length * (n - pow(10, length - 1) + 1);
//
//     return count;
// }
//
// int main() {
//     int n = 999;  // Example input
//     cout << "Total number of characters from 1 to " << n << " is " << countCharacters(n) << endl;
//     return 0;
// }

// string quickSort(string str) {
//     if (str.size() <= 1) {
//         return str; // base case: if the string has 0 or 1 character, it's already sorted
//     }
//
//     char pivot = str[str.size() / 2]; // choose the middle character as the pivot
//     string left, middle, right;
//
//     // Partition the string into left, middle, and right based on the pivot
//     for (char c : str) {
//         if (c < pivot) {
//             left.push_back(c); // characters smaller than pivot
//         }
//         else if (c == pivot) {
//             middle.push_back(c); // characters equal to pivot
//         }
//         else {
//             right.push_back(c); // characters greater than pivot
//         }
//     }
//
//     // Recursively sort the left and right parts
//     string sortedLeft = quickSort(left);
//     string sortedRight = quickSort(right);
//
//     // Concatenate sorted left, middle, and right parts
//     return sortedLeft + middle + sortedRight;
// }
// bool dfs(vector<vector<int>> board ,int n,int row,int col) {
//     if(row==n && col==n) {
//         for(auto c:board) {
//             cout<<endl;
//             for(auto a:c) {
//                 cout<<a<<' ';
//             }
//         }
//         return true;
//     }
//     if(row<0|| row>n||col<0||col>n || board[row][col]==0||board[row][col]==-1) {
//         return false;
//     }
//     int temp=board[row][col];
//     board[row][col]=-1;
//     bool find=dfs(board,n,row+1,col)||
//               dfs(board,n,row-1,col)||
//               dfs(board,n,row,col-1)||
//               dfs(board,n,row,col+1);
//
//     board[row][col]=temp;
//     return find;
// }

// #include<algorithm>
// int main() {
//     int windowSize = 3;
//     vector<int> nums = {1, 3, 5, 2, 1, 8, 6, 9};
//     vector<int> result;
//
//     // Check if window size is larger than the array
//     if (windowSize > nums.size()) {
//         cout << "Window size is larger than the array." << endl;
//         return 0;
//     }
//
//     int currmax = nums[0];  // Initialize currmax with the first element
//     int start = 0;          // Start of the window
//
//     for (int i = 0; i < nums.size(); i++) {
//         // Update the current maximum for the window
//         currmax = max(currmax, nums[i]);
//
//         // Once the window reaches the desired size
//         if (i - start + 1 == windowSize) {
//             // Push the maximum for this window to the result
//             result.push_back(currmax);
//
//             // Slide the window by increasing the start
//             start++;
//
//             // Recalculate currmax for the new window starting at `start`
//             currmax = nums[start];
//             for (int k = start; k <= i; k++) {
//                 currmax = max(currmax, nums[k]);
//             }
//         }
//     }
//
//     // Output the result
//     for (auto num : result) {
//         cout << num << " ";
//     }
//     cout << endl;
//     return 0;
// }


// //Min sum of squares
// #include <iostream>
// #include <vector>
// #include <cmath>
// using namespace std;
//
// int minSquares(int n) {
//     // Create a dp array to store the minimum squares for each value up to n
//     vector<int> dp(n + 1, n); // Initialize with maximum value n (worst case)
//     dp[0] = 0;  // Base case
//
//     // Fill dp array
//     for (int i = 1; i <= n; i++) {
//         // For each i, try all possible squares less than or equal to i
//         for (int j = 1; j * j <= i; j++) {
//             dp[i] = min(dp[i], dp[i - j * j] + 1);
//         }
//     }
//
//     return dp[n];  // The result will be stored in dp[n]
// }
//
// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//
//     cout << "Minimum number of squares to sum up to " << n << " is: " << minSquares(n) << endl;
//
//     return 0;
// }

//Count Rectangles
// #include <iostream>
// #include <vector>
// using namespace std;
//
// int countRectangles(vector<vector<int>>& matrix) {
//     int n = matrix.size();
//     if (n == 0) return 0;
//     int m = matrix[0].size();
//     int count = 0;
//
//     // Create a height array initialized to 0 for all columns
//     vector<int> height(m, 0);
//
//     // Iterate over all rows
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             // Update height for column j
//             if (matrix[i][j] == 1) {
//                 height[j] += 1;  // Increment height if there's a '1'
//             } else {
//                 height[j] = 0;   // Reset height to 0 if there's a '0'
//             }
//         }
//
//         // Now count rectangles in the histogram formed by 'height'
//         for (int j = 0; j < m; ++j) {
//             int minHeight = height[j];
//             for (int k = j; k < m && minHeight > 0; ++k) {
//                 minHeight = min(minHeight, height[k]);
//                 count += minHeight;  // Count how many rectangles can be formed
//             }
//         }
//     }
//
//     return count;
// }
//
// int main() {
//     vector<vector<int>> matrix = {
//         {0, 1, 1, 0},
//         {1, 1, 1, 0},
//         {0, 0, 1, 1},
//         {0, 0, 1, 1}
//     };
//
//     cout << "Number of rectangles: " << countRectangles(matrix) << endl;
//
//     return 0;
// }
//Greatest Number Produced
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;
//
// // Custom comparison function for sorting
// bool compare(const string& a, const string& b) {
//     return a + b > b + a;
// }
//
// // Function to perform 3-way partitioning quicksort
// void quicksort(vector<string>& arr, int low, int high) {
//     if (low >= high) return;
//
//     // Choose the middle element as the pivot
//     int mid = low + (high - low) / 2;
//     string pivot = arr[mid];
//     int lt = low, i = low, gt = high;
//
//     // 3-way partitioning
//     while (i <= gt) {
//         if (compare(arr[i], pivot)) {
//             // arr[i] should come before the pivot
//             swap(arr[i], arr[lt]);
//             lt++;
//             i++;
//         } else if (compare(pivot, arr[i])) {
//             // arr[i] should come after the pivot
//             swap(arr[i], arr[gt]);
//             gt--;
//         } else {
//             // arr[i] is equal to the pivot
//             i++;
//         }
//     }
//
//     // Recursively sort the left and right parts
//     quicksort(arr, low, lt - 1);
//     quicksort(arr, gt + 1, high);
// }
//
// // Function to form the largest possible number
// string largestNumber(vector<int>& nums) {
//     // Convert integers to strings
//     vector<string> numStrings;
//     for (int num : nums) {
//         numStrings.push_back(to_string(num));
//     }
//
//     // Apply 3-way partition quicksort with custom comparator
//     quicksort(numStrings, 0, numStrings.size() - 1);
//
//     // If the largest number is '0', return '0' (to handle cases like [0, 0])
//     if (numStrings[0] == "0") {
//         return "0";
//     }
//
//     // Concatenate the sorted strings
//     string result = "";
//     for (const string& num : numStrings) {
//         result += num;
//     }
//
//     return result;
// }
//
// int main() {
//     vector<int> nums = {3, 30, 34, 5, 9};
//     cout << "Largest possible number: " << largestNumber(nums) << endl;
//
//     return 0;
// }
// #include<iostream>
// #include<stack>
// #include<vector>
// #include<unordered_map>
// #include<cmath>
// using namespace std;
// long long factorial(int n) {
//     long long fact = 1;
//     for (int i = 2; i <= n; i++) {
//         fact *= i;
//     }
//     return fact;
// }
// int main() {
//     float x = 90*3.14159/180;
//     int n = 10;
//     char addorsub = '-';
//     float result = x;
//
//     for (int i = 3; i < n; i += 2) {
//         // Calculate term using float/double to avoid truncation
//         float term = pow(x, i) / factorial(i);
//
//         // Add or subtract the term based on addorsub
//         if (addorsub == '+') {
//             result += term;
//         } else {
//             result -= term;
//         }
//
//         // Alternate between '+' and '-'
//         addorsub = (addorsub == '+') ? '-' : '+';
//     }
//     cout<<result;
// }
//Fathe - Son
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;
// int findDescendants(unordered_map<string,vector<string>> fahsonMap,string father,int level) {
//     int count=0;
//     vector<string> curr;
//     for(auto pair:fahsonMap) {
//         if(pair.first==father) {
//             for(auto c:pair.second) {
//                 curr.push_back(c);
//             }
//         }
//     }
//     level--;
//
//
//     while(level>0) {
//         vector<string> nextlevel;
//         for(auto n:curr) {
//             if(fahsonMap.find(n) !=fahsonMap.end()) {
//                 for(auto r:fahsonMap[n]) {
//                     nextlevel.push_back(r);
//                 }
//             }
//         }
//         curr=nextlevel;
//         level--;
//     }
//
//     // curr.erase(curr.begin(),curr.begin()+n);
//     for(auto n:curr) {
//             count++;
//     }
//     return count;
// }
// int main() {
//     vector<pair<string, string>> pairs = {
//             {"Ram", "Syam"},
//             {"Akil", "Syam"},
//             {"Nikil", "Ram"},
//             {"Subhash", "Ram"},
//             {"Karthik", "Akil"},
//         {"Arya","Nikil"}
//         };
//     unordered_map<string,vector<string>> fahSonMap;
//     for(auto pair:pairs) {
//         fahSonMap[pair.second].push_back(pair.first);
//     }
//     int result=findDescendants(fahSonMap,"Syam",2);
//     cout<<result;
//     return 0;
// }
//snake pattern
#include<iostream>
using namespace std;
int main() {
   int n=8;
    int r=1;
    int m=4;
    bool rev=false;
        for(int i=0;i<n;i++) {
            cout<<endl;
            if(r<n+1){
                if(!rev) {
                    for(int j=0;j<m;j++) {
                        cout<<r<<' ';
                        r++;
                    }
                    rev=true;
                }
                else {
                    int k=r;;
                    for(int j=m;j>0;j--) {
                        cout<<k+j-1<<' ';
                        r++;
                    }
                    rev=false;
                }
            }
            else {
                break;
            }
        }

    return 0;
}




































