class Stream_82CFDF88 {
public:
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void Write(const void *data, int size);
};
struct Writer_82CFDF88 { int pad[2]; Stream_82CFDF88 *stream; };
extern "C" void fn_82CFDF88(Writer_82CFDF88 *self, unsigned char value)
{
  self->stream->Write(&value, 1);
}
