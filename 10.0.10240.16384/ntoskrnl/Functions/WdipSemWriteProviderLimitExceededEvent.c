// WdipSemWriteProviderLimitExceededEvent 
 
int __fastcall WdipSemWriteProviderLimitExceededEvent(int a1)
{
  int result; // r0

  if ( a1 )
    result = WdipSemWriteEvent(WdipSemRegHandle, dword_61CB14, (int)WDI_SEM_EVENT_INIT_PROVIDER_MAX, 0);
  else
    result = -1073741811;
  return result;
}