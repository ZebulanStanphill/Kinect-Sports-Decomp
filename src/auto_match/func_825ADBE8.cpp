#include <deque>
#include <algorithm>

typedef std::deque<unsigned int> Deque_825ADBE8;

struct Pred_825ADBE8 {
    unsigned int value;
    bool operator()(unsigned int x) const { return !(x < value); }
};

template Deque_825ADBE8::iterator std::find_if(Deque_825ADBE8::iterator, Deque_825ADBE8::iterator, Pred_825ADBE8);
