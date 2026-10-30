struct S {
    int pad, active;
    char gap[44];
    unsigned a;
    int b;
    char gap2[4];
    float scale, result;
    int start;
    void update(int v);
};
void S::update(int v) {
    int d = v - start;
    unsigned x = d + a;
    a = x;
    b = d + b;
    active = 1;
    result = -(scale * (float)x);
}
