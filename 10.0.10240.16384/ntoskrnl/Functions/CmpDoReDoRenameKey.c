// CmpDoReDoRenameKey 
 
int __fastcall CmpDoReDoRenameKey(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v6[4]; // [sp+0h] [bp-10h] BYREF

  v6[0] = a3;
  v6[1] = a4;
  v4 = CmpDoReOpenTransKey(a1, a2 + 32, 131078, v6);
  if ( v4 >= 0 )
  {
    v4 = ZwRenameKey();
    ZwClose();
  }
  return v4;
}