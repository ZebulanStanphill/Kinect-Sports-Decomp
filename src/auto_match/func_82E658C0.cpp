struct MediaBuffer_82E658C0 {
    virtual long __stdcall QueryInterface(const void *iid, void **object) = 0;
    virtual unsigned long __stdcall AddRef() = 0;
    virtual unsigned long __stdcall Release() = 0;
    virtual long __stdcall Lock(unsigned char **buffer, unsigned long *maxLength, unsigned long *length) = 0;
    virtual long __stdcall Unlock() = 0;
    virtual long __stdcall GetCurrentLength(unsigned long *length) = 0;
};

struct __declspec(novtable) Interface_82E658C0 {
    virtual long __stdcall QueryInterface(const void *iid, void **object) = 0;
    virtual unsigned long __stdcall AddRef() = 0;
    virtual unsigned long __stdcall Release() = 0;
    virtual void Method3() = 0;
    virtual void Method4() = 0;
    virtual void Method5() = 0;
    virtual void Method6() = 0;
    virtual void Method7() = 0;
    virtual void Method8() = 0;
};

struct Base_82E658C0 {
    Base_82E658C0()
    {
    }

    virtual void BaseMethod0();
    virtual void BaseMethod1();
    virtual void BaseMethod2();
    virtual void BaseMethod3();
    virtual void BaseMethod4();
};

class BufferView_82E658C0 : public Interface_82E658C0, public Base_82E658C0
{
  public:
    BufferView_82E658C0(MediaBuffer_82E658C0 *buffer, unsigned int offset, long *result);
    long __stdcall QueryInterface(const void *iid, void **object);
    unsigned long __stdcall AddRef();
    unsigned long __stdcall Release();
    void Method3();
    void Method4();
    void Method5();
    void Method6();
    void Method7();
    void Method8();

    unsigned int m_refCount;        /* 0x08 */
    MediaBuffer_82E658C0 *m_buffer; /* 0x0C */
    unsigned int m_offset;          /* 0x10 */
    unsigned long m_length;         /* 0x14 */
    unsigned long m_currentLength;  /* 0x18 */
};

BufferView_82E658C0::BufferView_82E658C0(MediaBuffer_82E658C0 *buffer, unsigned int offset, long *result)
    : m_refCount(1), m_buffer(0), m_offset(offset)
{
    long hr = buffer->GetCurrentLength(&m_length);
    if (hr >= 0) {
        if (m_offset > m_length) {
            hr = 0x80070057;
        } else {
            m_buffer = buffer;
            m_length -= m_offset;
            m_currentLength = m_length;
            buffer->AddRef();
        }
    }
    *result = hr;
}
