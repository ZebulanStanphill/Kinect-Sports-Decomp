// ScaleformdbFile constructor.
class ScaleformdbFile {
public:
    virtual void f0();
    int m_4;
    int m_8;
    int m_c;
    unsigned char m_10;
    __forceinline ScaleformdbFile(int a) : m_4(1), m_8(a), m_c(0), m_10(1) {}
};

extern "C" void fn_8267A470(ScaleformdbFile *p, int a)
{
    p->ScaleformdbFile::ScaleformdbFile(a);
}
