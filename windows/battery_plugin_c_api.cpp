#include "include/battery_plugin/battery_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "battery_plugin.h"

void BatteryPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  battery_plugin::BatteryPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
