#define prog 3

#if(prog == 1)

#include <memory>
#include <iostream>
#include <string>
using namespace std;

int main(){
    
    // 3 ways to initialize pointer
    shared_ptr<string> p1 = nullptr;
    shared_ptr<string> p2 = 0;
    shared_ptr<string> p3 = NULL;
    
    // allocate and use dynamic memory using make_share
    p1 = make_shared<string>("");
    if (p1 && p1->empty()) {
        *p1 = "HI";
    }
    cout << *p1 << endl;
    return 0;

}

#elif(prog == 2)

#include <memory>
#include <iostream>
#include <string>
using namespace std;

int main(){
    
    auto ptr1 = make_shared<string>(5, 'Z');
    
    cout << *ptr1 << endl;
    
    return 0;

}

#elif(prog == 3)

#include <memory>
#include <iostream>
#include <string>
using namespace std;

int main(){
    
    auto p = make_shared<int>(42);
    
    auto q(p); // shallow copy?
    
    cout << "p: " << *p << endl;
    cout << "q: " << *p << endl;
    
    *p = 111; // shallow copy changes both smart pointers
    
    cout << "p: " << *p << endl;
    cout << "q: " << *p << endl;
    
    p = nullptr;
    q = nullptr;
    
    return 0;
    
}

#endif



























