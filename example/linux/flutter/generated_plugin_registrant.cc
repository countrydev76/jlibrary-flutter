//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <jlibrary/jlibrary_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) jlibrary_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "JlibraryPlugin");
  jlibrary_plugin_register_with_registrar(jlibrary_registrar);
}
