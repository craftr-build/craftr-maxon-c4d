/// Copyright (C) <year> <name>
/// All rights reserved.

#include <c4d.h>

/// --------------------------------------------------------------------------
/// --------------------------------------------------------------------------
Bool PluginStart()
{
  return true;
}

/// --------------------------------------------------------------------------
/// --------------------------------------------------------------------------
void PluginEnd()
{
}

/// --------------------------------------------------------------------------
/// --------------------------------------------------------------------------
Bool PluginMessage(Int32 msg, void* pdata)
{
  switch (msg) {
    case C4DPL_INIT_SYS:
      return ::resource.Init();
  }
  return true;
}