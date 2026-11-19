

void d3dx_output_message(int *cinfo)

{
  unsigned char buffer [192];
  
  (*(int (**)())(*cinfo + 0xc))(cinfo,buffer);
  return;
}

