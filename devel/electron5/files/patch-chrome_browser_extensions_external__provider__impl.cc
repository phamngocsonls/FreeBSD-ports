--- chrome/browser/extensions/external_provider_impl.cc.orig	2019-04-08 08:32:44 UTC
+++ chrome/browser/extensions/external_provider_impl.cc
@@ -747,7 +747,7 @@ void ExternalProviderImpl::CreateExternalProviders(
     chromeos::DemoSession::Get()->SetExtensionsExternalLoader(loader);
     provider_list->push_back(std::move(demo_apps_provider));
   }
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   provider_list->push_back(std::make_unique<ExternalProviderImpl>(
       service,
       new ExternalPrefLoader(chrome::DIR_STANDALONE_EXTERNAL_EXTENSIONS,
@@ -774,7 +774,7 @@ void ExternalProviderImpl::CreateExternalProviders(
         bundled_extension_creation_flags));
 
     // Define a per-user source of external extensions.
-#if defined(OS_MACOSX) || (defined(OS_LINUX) && defined(CHROMIUM_BUILD))
+#if defined(OS_MACOSX) || ((defined(OS_LINUX) || defined(OS_BSD)) && defined(CHROMIUM_BUILD))
     provider_list->push_back(std::make_unique<ExternalProviderImpl>(
         service,
         new ExternalPrefLoader(chrome::DIR_USER_EXTERNAL_EXTENSIONS,
