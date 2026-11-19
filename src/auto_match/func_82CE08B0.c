extern int NetDll_WSACleanup();


void WSACleanup(void)

{
  NetDll_WSACleanup(1);
  return;
}
