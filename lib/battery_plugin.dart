
import 'battery_plugin_platform_interface.dart';

class BatteryPlugin {
  Future<String?> getPlatformVersion() {
    return BatteryPluginPlatform.instance.getPlatformVersion();
  }
}
