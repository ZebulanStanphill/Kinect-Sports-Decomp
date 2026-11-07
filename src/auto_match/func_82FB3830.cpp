struct Pair_82FB3830 {
    int first;
    int second;
    Pair_82FB3830(int f, int s) : first(f), second(s) {}
};

extern "C" unsigned int fn_82FB37A0(int a, int b, int first, int second);

extern "C" Pair_82FB3830 fn_82FB3830(int a, const Pair_82FB3830 &in, int b)
{
    if (fn_82FB37A0(a, b, in.first, in.second) == 0)
        return Pair_82FB3830(0, in.second);
    return Pair_82FB3830(in.first, in.second);
}
