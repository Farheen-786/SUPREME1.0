// #include <iostream>
// #include <array>
// using namespace std;
 
 
// int main(){
//     //static array
//     int arr[3]={3,5,6};
//     //vector array
//     array<int,4>a={1,4,5,6};
//     int size=a.size();
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<" ";//acces all the elemnt present in array
//     }
//     cout<<"enter at 2nd index"<<a.at(2); //element at 2nd index 
//     cout<<"enter or not"<<a.empty()<<endl;//array empty or not 
//      cout<<" first  element"<<a.front()<<endl;//front elemnt in array
//      cout<<" last  element"<<a.back()<<endl;//last element in array
//      //vector dynamic hota h jb 1-vector bhar jata h to 2nd vala creat hota h double size ka(mtlb first vale vector ki sare element copy krkr extra space leta h )

//     return 0;
// }
#include <iostream>
using namespace std;
#include <vector> 
int main(){
    vector <int>v;
    vector<int>a(5,1);
    vector<int>last(a);
    cout<<"print a"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<"capacity"<<v.capacity()<<endl;//how many element present in array(vector)
    cout<<"size"<<v.size()<<endl;//how many element present in array(vector)
     v.push_back(0);
      cout<<"capacity"<<v.capacity()<<endl;// 3 element deri h matalb size h uska 3 and capacity h jitna space  memory m vector lera h
      cout<<"size"<<v.size()<<endl;// 3 element deri h matalb size h uska 3 and capacity h jitna space  memory m vector lera h
     v.push_back(1);
      cout<<"capacity"<<v.capacity()<<endl;
      cout<<"size"<<v.size()<<endl;// 3 element deri h matalb size h uska 3 and capacity h jitna space  memory m vector lera h

     v.push_back(2);
      cout<<"capacity"<<v.capacity()<<endl;
      cout<<"size"<<v.size()<<endl;// 3 element deri h matalb size h uska 3 and capacity h jitna space  memory m vector lera h
      cout<<"capacity"<<v.capacity()<<endl;
      cout<<"before pop";
      for(int i:v){
        cout<<i<<" ";
      }
      cout<<endl;
      v.pop_back();
      cout<<"after pop"<<endl;
      for(int i:v){
        cout<<i<<" ";

      }
      cout<<"before clear size"<<v.size();
      v.clear();
      cout<<"after clear size"<<v.size()<<endl;

      cout<<"size"<<v.size()<<endl;// 3 element deri h matalb size h uska 3 and capacity h jitna space  memory m vector lera h
    return 0;
}