#include <deque>
#include <algorithm>

typedef std::deque<unsigned __int64> Deque_823B95E0;

struct Pred_823B95E0 {
    unsigned __int64 value;
    bool operator()(unsigned __int64 x) const { return x == value; }
};

template Deque_823B95E0::iterator std::find_if(Deque_823B95E0::iterator, Deque_823B95E0::iterator, Pred_823B95E0);
