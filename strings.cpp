#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<map>
using namespace std;
// ---------------------------------------reverse--------------------------------------------------------
// void reverse(char name[25]){
//     int s=0,e=strlen(name)-1;
//     while(s<=e){
//        swap(name[s],name[e]);
//         s++;
//         e--;
//     }
// }
//------------------------------------------blankspace----------------------------------------------------
// void replace_blank_space(char name[25]){
//     for(int i=0;i<strlen(name);i++){
//         if(name[i] == ' '){
//             name[i]='@';
//         }
//     }
// }

//----------------------------------palindorome--------------------------------------
// bool plaindrome(char name[]){
//     int i=0,j=strlen(name)-1;
//     while(i<=j){
//         if(name[i]==name[j]){
//            i++;
//            j--;
//         }
//         else{
//             return false;
//         } 
//     }    
// return true;
// }


// void touppercase(char name[]){
//     for(int i=0;i<strlen(name);i++){
//         if(name[i]>='A'&&name[i]<='Z'){
//             i++;
//         }
//         name[i]=name[i]-'a'+'A';
//     }
//      cout<<" upper case is  "<<name<<endl;
// }

// void tolowercase(char name[]){
//     for(int i=0;i<strlen(name);i++){
//         name[i]=name[i]-'A'+'a';
//     }
//     cout<<" lower case is  "<<name<<endl;
// }

// void removeall_duplicates(string a){
//     int i=0;
//     string ans="";
//     while(i<a.length()){
//         if(ans.length()>0 && a[i]==ans[ans.length()-1]){
//             ans.pop_back();
//         }
//         else{
//             ans.push_back(a[i]);
//         }
//         i++;
//     }
//     cout<<ans;
// }
// bool plaindromee(string name,int i,int j){
//     while(i<=j){
//         if(name[i]==name[j]){
//            i++;
//            j--;
//         }
//         else{
//             return false;
//         } 
//     }    
// return true;
// }

// bool valid_palindrome(string s){
//     int i=0,j=s.length()-1;
//     while(i<=j){
//         if(s[i]!=s[j]){
//             return plaindromee(s,i+1,j)  || plaindromee(s,i,j-1);
//         }
//         else{
//             i++;
//             j--;
//         }
//     }
//     return true;
// }

// -------------------------------------minimum time dif---------------------------------------------------------------------

// int findmindiff(vector<string>&timepoints){
//     vector<int>min;
//     for(int i=0;i<timepoints.size();i++){
//         string curr = timepoints[i];
//         int hours = stoi(curr.substr(0,2));
//         int mini = stoi(curr.substr(3,2));
//         int totalmin = hours*60+mini;
//         min.push_back(totalmin);

//     }
//     sort(min.begin(),min.end());
//     int mini = INT16_MAX;
//     for(int i=0;i<min.size()-1;i++){
//         int diff = min[i+1]-min[i];
//         if(diff<mini){
//             mini=diff;
//         }
//     }
//     int ldif=(min[0]+1440)-min[min.size()-1];
          
//            if(ldif<mini){
//             mini=ldif;
//         }
    
//     int ldif1=min[min.size()-1]-min[0];
//         if(ldif1<mini){
//             mini=ldif1;
//         }
//     return mini;
// }


// ------------------------------------palindromic substring ----------------------------------------------

// int expandindex(string s,int i,int j){
//     int count=0;
//     while(i>=0 && j<s.length() && s[i]==s[j]){
//         j++;
//         i--;
//         count++;
//     }
//     return count;
// }

// int palindromesubstring(string s){
//     int i=0,count=0;
//     int oddcase=0,evencase=0;
//     for(int k=0;k<s.length();k++){
//         oddcase=expandindex(s,i,i);
//         count=count+oddcase;
//         evencase=expandindex(s,i,i+1);
//         count=count+evencase;
//     }
//     return count;
// }

// ------------------------------------------------anagram----------------------------------
// bool validanagram(string s,string t){
//     int frequencytable[256]={0};
//     for(int i=0;i<s.length();i++){
//         frequencytable[s[i]]++;
//     }
//     for(int i=0;i<t.length();i++){
//         frequencytable[t[i]]--;
//     }
//     for(int i=0;i<256;i++){
//         if(frequencytable[i]!=0){
//             return false;
//         }
//     }
//     return true;
// }

//--------------------------------------reverse letter only ------------------------------------------
// void reverse_lettersonly(string s){
//     int i=0,j=s.length()-1;
//     while(i<=j){
//         if(isalpha(s[i])&&isalpha(s[j])){
//             swap(s[i],s[j]);
//             i++;
//             j--;
//         }
//         else if(isalpha(s[i])){
//             j--;
//         }
//         else{
//             i++;
//         }
//     }
//     cout<<"the string is "<<s;
// }


//---------------------------------------------------longest prefic--------------------------------------------- 

// string longestprefix(vector<string>& strs){
//     int i=0;
//     string ans;
//     while(true){
//         char curr_char=0;
//         for(auto str:strs){
//             if(i>=str.size()){
//                 curr_char=0;
//                 break;
//             }
//             if(curr_char==0){
//                 curr_char=str[i];
//             }
//             else if(str[i]!=curr_char){
//                 curr_char=0;
//                 break;
//             }
//         }
//         if(curr_char==0){
//             break;
//         }
//         ans.push_back(curr_char);
//         i++;
//     }
//     std::cout<<ans;
// }

// ----------------------------------------------reverse vowles--------------------------------------
// bool isvowel(char ch){
//     tolower(ch);
//     return ch=='a'||ch=='e'||ch=='i' ||ch=='o'||ch=='u';
// }
// void reverse_vowles(string s){
//     int i=0,l=0,h=s.length()-1;
//     while(l<=h){
//         if(isvowel(s[l]) && isvowel(s[h])){
//             swap(s[l],s[h]);
//             l++;
//             h--;
//         }
//         if(isvowel(s[l])){
//             h--;
//         }
//         else{
//             l++;
//         }
//     }
//     cout<<"the string is :"<<s;
// }

//-------------------------------longest_palindromesubstring---------------------------------------------


// bool isplaindrome(string name,int i,int j){
//     while(i<=j){
//         if(name[i]==name[j]){
//            i++;
//            j--;
//         }
//         else{
//             return false;
//         } 
//     }    
// return true;
// }

// void longest_palindromesubstring(string s){
//     string ans="";
//     for(int i=0;i<s.length();i++){
//         for(int j=i;j<s.length();j++){
//             if(isplaindrome(s,i,j)){
//                 string t=s.substr(i,j-i+1);
//                 if(ans.size()<t.size()){
//                     ans=t;
//                 }
//             }
//         }
//     }
//     cout<<"the ans is : "<<ans;
// }

// ---------------------------------------------------isomorphic string--------------------------------------------------

// bool isomorphic_string(string s,string t){
//     if(s.length()!=t.length()){
//         return 0;
//     }
//     int hash[256]={0};
//     bool istcharmapped[256]={0};
//     for(int i=0;i<s.length();i++){
//         if(hash[s[i]]==0 && istcharmapped[t[i]]==0){
//             hash[s[i]]=t[i];
//             istcharmapped[i]=true;
//         }
//     }
//     for(int i=0;i<s.length();i++){
//         if(char(hash[s[i]])!=t[i]){
//             return false;
//         }
//     }
//     return true;
// }

// ---------------------------------------------------reorganize a string( seperate adjacent letters ) ------------------------------------

// string reorganise_string(string s){
//     int hash[26]={0};
//     for(int i=0;i<s.length();i++){
//         hash[s[i]-'a']++;
//     }
//     char mostfrequentch;
//     int maxfrequency=INT16_MIN;
//     for(int i=0;i<26;i++){
//         if(hash[i]>maxfrequency){
//             maxfrequency=hash[i];
//             mostfrequentch=i+'a';
//         }
//     }
//     int index=0;
//     while(maxfrequency > 0 && index < s.size()){
//         s[index]=mostfrequentch;
//         maxfrequency--;
//         index +=2;
//     }
//     if(maxfrequency!=0){
//         return"";
//     }

//     hash[mostfrequentch - 'a']=0;
//     for(int i=0;i<26;i++){
//         while(hash[i]>0){
//             if(index>=s.size()){
//                 index=1;
//                 s[index]=i+'a';
//                 index+=2;
//                 hash[i]--;
//             }
//         }
//     }
//     return s;

// }

//-------------------------------groupanagram-------------------------------------------------
// vector<vector<string>> groupanagram(vector< string >strs){
//     map<string,vector<string>>mp;
//     for(auto str:strs){
//         string s=str;
//         sort(s.begin(),s.end());
//         mp[s].push_back(str);
//     }
//     vector<vector<string>>ans;
//     for(auto it=mp.begin();it!=mp.end();it++){
//         ans.push_back(it->second);
//     }
//     return ans;
// }

// ------------------------------------------------firdtoccurence of string haystack------------------------------------------

// int firstocchay(string hay,string needle){
//     int index=0;
//     int m=hay.length();
//     int n=needle.length();
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(needle[j]!=hay[i+j]){
//                 break;
//             }
//             if(j==n-1){
//                 return i;
//             }
//         }
//     }
//     return -1;
// }

// ------------------------------------------stringtooint-------------------------------------------------------------
// int stringtooint(string s){
//     int m=s.length();
//     int i=0,sign=1,ans=0;
//     while(s[i]==' '){
//         i++;
//     }
//     if(i<m && s[i]=='-' || s[i]=='+'){
//         if(s[i]='+'){
//             sign=1;
//             i++;
//         }
//         else {
//             sign=-1;
//             i++;
//         }
//     }
//     while(i<m && isdigit(s[i])){
//         ans=ans*10+(s[i]-'0');
//         i++;
//     }
//     return ans*sign;
// }

//---------------------------------------------string compression----------------------------------------------------
// int stringcomp(vector<char>s){
//     int index=0,count=1;
//     char previous=s[0];
//     for(int i=1;i<s.size();i++){
//         if(s[i]==previous){
//             count++;
//         }
//         else{
//             s[index++]=previous;
//             if(count>1){
//                 int start=index;
//                 while(count){
//                     s[index++]=(count%10)+'0';
//                     count/=10;
//                 }
//                  reverse(s.begin()+start,s.begin()+index);
//             }
//             previous=s[i];
//             count=1;

//         }
//     }
//     s[index++]=previous;
//     if(count>1){
//         int start=index;
//         while(count){
//             s[index++]=(count%10)+'0';
//             count/=10;
//        }
//        reverse(s.begin()+start,s.begin()+index);
//     }
//         for(int i=0;i<index;i++){
//         cout<<s[i]<<" ";
//     }
//     return index;
// }

//--------------------------------------------------integer to roman ----------------------------------------------
void inttoroman(int a){
    string romansymbols[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int values[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string ans="";
    for(int i=0;i<13;i++){
        while(a>=values[i]){
            ans=ans+romansymbols[i];
            a=a-values[i];
        }
    }
    for(auto e:ans){
        cout<<e;
    }
}

int main(){
    // char name[25];
    // cin.getline(name,25);
    // cout<<name<<endl;
    // reverse(name);
    // cout<<"reverse is "<<name;
    // replace_blank_space(name);
    // cout<<"removed blank space is "<<name;
    // cout<<" check plaindrome "<<endl;
    // bool pal = plaindrome(name);
    // cout<<pal;
    // touppercase(name);
    // tolowercase(name);
    // string a="";
    // removeall_duplicates(a);
    // int ans = valid_palindrome( a );
    // cout<<ans;

    // vector<string> timepoints{"23:59","00:00"};
    // int ans =findmindiff(timepoints);
    // std::cout<<ans;

    // string s="racecar";
    // int ans=palindromesubstring(s);
    // cout<<ans;
    // string t="carrac";
    // bool ans=validanagram(s,t);
    // cout<<ans;

    // string s="-123abcd-123";
    // cout<<s;
    // reverse_lettersonly(s);

    // vector<string>strs{"flower","flow","flower"};
    // longestprefix(strs);

    // string s="cbbd";
    // reverse_vowles(s);

    // longest_palindromesubstring(s);

    // string s="title",t="paper";
    // bool a = isomorphic_string(s,t);
    // cout<<"is the given strings are isomorphic : "<<a;


    // string s="aaab";
    // string ans =reorganise_string(s);
    // cout<<"reoganized string is "<<ans;

    // vector<string>strs{"eat","tea","tan","ate","nat","bat"};
    // vector<string>strs{"a"};
    // vector<vector<string>>ans=groupanagram(strs);
    // for(auto str:ans){
    //     cout<<endl;
    //     for(auto element:str){
    //         cout<<element<<endl;
    //     }
    // }


    // string hay="leetcode";
    // string needle="code";
    // int ans =firstocchay(hay,needle);
    // cout<<ans;

    // string s="-543";
    // int ans=stringtooint(s);
    // cout<<ans<<endl;

    // vector<char>a{'a','a','b','b','b','b','b','b','b','b','b','b','b','b','c','c','c'};
    // int b=stringcomp(a);

    int a=100;
    inttoroman(a);
    return 0;
}