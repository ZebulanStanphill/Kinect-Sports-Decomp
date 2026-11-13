extern int fn_82AB15D0();

int fn_82BD07B8(void *self, int node1, int node2)
{
  int lo;
  int hi;
  if (!(node1 != node2)) {
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "node1 != node2", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\interference.cpp", 0x2b2);
  }
  lo = node1 < node2 ? node1 : node2;
  hi = node1 > node2 ? node1 : node2;
  return (hi - 1) * hi / 2 + lo;
}
