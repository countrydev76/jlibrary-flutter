
import 'dart:async';

import 'package:flutter/services.dart';

class Jlibrary {
  static const MethodChannel _channel = MethodChannel('jlibrary');

  static Future<String?> get platformVersion async {
    final String? version = await _channel.invokeMethod('getPlatformVersion');
    return version;
  }
}
