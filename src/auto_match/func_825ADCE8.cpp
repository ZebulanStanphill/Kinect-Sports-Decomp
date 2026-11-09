#include <deque>
#include <algorithm>

typedef std::deque<unsigned int> Deque_825ADCE8;

struct Pred_825ADCE8 {
    unsigned int low;
    unsigned int high;
    bool operator()(const unsigned int &x) const { return x >= low && x <= high; }
};

template Deque_825ADCE8::iterator std::find_if(Deque_825ADCE8::iterator, Deque_825ADCE8::iterator, Pred_825ADCE8);
