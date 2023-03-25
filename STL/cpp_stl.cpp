#include <bits/stdc++.h>
using namespace std;

void cpp_pairs()  {
  // pairs are used to store multiple values in one variable
  pair<int, int> p= {1, 3};
  cout<<p.first<<" "<<p.second<<endl;
  
  // to store more than 2 values in one variable
  pair<int, pair<int, int>> p2= {1, {2, 3}};
  cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
  
  // to create an array of pairs
  pair<int, int> a[]= {{1, 2}, {2, 3}, {3, 4}};
  cout<<a[0].first<<" "<<a[0].second<<endl;
  cout<<a[1].first<<" "<<a[1].second<<endl;
  cout<<a[2].first<<" "<<a[2].second<<endl;
}

void cpp_vectors()  {
  //vector is used to dynamically stores values in a contiguous manner. we can modify size of a vector unlike arrays.
  vector<int> v1= {1, 2, 3};
  v1.push_back(4); // v1= {1, 2, 3, 4}
  v1.emplace_back(2); // v1= {1, 2, 3, 4, 2}
  // emplace_back() and push_back() are similar but emplace_back() is a bit faster and reliable in many forms
  
  // vector of pair
  vector<pair<int, int>> v2= {{1, 2}, {2, 3}};
  v2.push_back({3, 4});   // here we have to specify the data as a pair using {}
  v2.emplace_back(4, 5);  // here emplace_back() itself assumes the values to be a pair
  
  // to create a container with same values
  vector<int> v3(5, 100);  // v3= {100, 100, 100, 100, 100}
 
 // to copy one vector to another
 vector<int> v4(v3);  // v4= {100, 100, 100, 100, 100}
 
 // ITERATORS :- they are used to traverse on a container
 
 vector<int>::iterator it= v1.begin();
 cout<<*it<<endl;   // 1
 it++;
 cout<<*it<<endl;   // 2
 for(vector<int>:: iterator i2= v1.begin(); i2!=v1.end(); i2++)  
   cout<<*i2<<" ";
   cout<<endl;
 for(auto i3= v2.begin(); i3!=v2.end(); i3++)
   cout<<(*i3).first<<" "<<(*i3).second<<endl;
   
 // to access elements from the back, we initialise our iterator using vector.end() and to iterate we do i--
 for(auto i4= v1.end(); i4!=v1.begin(); i4--)
   cout<<*i4<<" ";
   cout<<endl;
   
 // to delete an element
 vector<int> v= {1, 2, 3, 4, 5, 6, 7, 8, 9};
 v.erase(v.begin()+1); // it will delete 2 from v
 
 // to delete a portion from a container
 // v= {1, 3, 4, 5, 6, 7, 8, 9}
 v.erase(v.begin()+2, v.begin()+4); // now v= {1, 3, 6, 7, 8, 9}  , deletes like [start, end)
 for(auto i5= v.begin(); i5!=v.end(); i5++)
   cout<<*i5<<" ";
   cout<<endl;
   
 // insert an element
 v.insert(v.begin(), 300); // inserts element at begining, now v= {300, 1, 3, 6, 7, 8, 9}
 // to insert multiple element at once
 v.insert(v.begin()+2, 2, 5); // inserts two 5s at begin()+2, i.e. v= {300, 1, 5, 5, 3, 6, 7, 8, 9}
 for(auto i5= v.begin(); i5!=v.end(); i5++)
   cout<<*i5<<" ";
   cout<<endl;
 // to insert one vector into another
 v.insert(v.begin()+1, v1.begin(), v1.end()); // now v= {300, 1, 2, 3, 4, 2, 1, 5, 5, 3, 6, 7, 8, 9}
 for(auto i5= v.begin(); i5!=v.end(); i5++)
   cout<<*i5<<" ";
   cout<<endl;
 
 cout<<v.size()<<endl;  // gives size of a container
 v.pop_back();  // removes element from last
 v.swap(v1);  // swaps two vectors
 v.clear();  // erases the whole vector
 if(v.empty())  // check whether a container is empty or not
   cout<<"Empty"<<endl;
 else
   cout<<"Not empty"<<endl;
}

void cpp_lists()  {
  // it is also a dynamic data structure like vector. but in list we can insert element at front in less cost than a vector.
  // in simple terms, a list works like a doubly linked-list whereas a vectro works like a singly liked-list.
  
  // in list also we have push_back(), emplace_back(), pop_back() func. alongwith push_front() and emplace_front() func.
  
  list<int> ls= {1, 2, 3};
  ls.push_front(4);  // ls= {4, 1, 2, 3}
  ls.emplace_front(3);  // ls= {3, 4, 1, 2, 3}
  
  for(auto it= ls.begin(); it!=ls.end(); it++)
    cout<<*it<<" ";
    cout<<endl;
  // rest all functions are same as vectors
}

void cpp_deque()  {
  deque<int> dq;
  // all fuctions are same as vectors and lists
}

void cpp_stack()  {
  // stack works on LIFO. in stack we have push(), emplace(), pop(), top() func.
  stack<int> st;
  st.push(1);   // st= {1}
  st.emplace(2);  // st= {2, 1}
  st.pop();  // removes element from top, i.e.  st= {1}
  st.push(2);  // st= {2, 1}
  st.push(4);  // st= {4, 2, 1}
  st.push(6);  // st= {6, 4, 2, 1}
  st.push(8);  // st= {8, 6, 4, 2, 1}
  
  cout<<st.top()<<endl;  // 8
  
  // rest all functions are same as vectors and lists
}

void cpp_queue()  {
  // queue works on FIFO. in queue we have push(), emplace(), pop() alongwith front() and back() func.
  queue<int> q;
  q.push(1);   // q= {1}
  q.emplace(2);  // q= {1, 2}
  q.pop();  // removes element from top, i.e.  q= {2}
  q.push(4);  // q= {2, 4}
  q.push(6);  // q= {2, 4, 6}
  q.push(8);  // q= {2, 4, 6, 8}
  
  cout<<q.front()<<endl;  // 2
  cout<<q.back()<<endl;  // 8
  
  // rest all functions are same as vectors and lists
}

void cpp_priority_queue();
/*
void cpp_set();

void cpp_multiset();

void cpp_unordered_set();

void cpp_map();

void cpp_multimap();

void cpp_unordered_map();

void cpp_algos();
*/
int main()  {
  // cpp_pairs();
  // cpp_vectors();
  // cpp_lists();
  // cpp_deque(); 
  // cpp_stack();
  // cpp_queue();
   cpp_priority_queue();
  // cpp_set();
  // cpp_multiset();
  // cpp_unordered_set();
  // cpp_map();
  // cpp_multimap();
  // cpp_unordered_map();
  // cpp_algos();
  
  return 0;
}
