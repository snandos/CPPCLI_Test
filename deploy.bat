
msbuild CPPCLI_Test.Package\CPPCLI_Test.Package.wapproj ^
		/t:Restore,Build,Publish ^
		/p:PlatformTarget=x64 ^
		/p:Configuration=Release ^
		/p:SelfContained=true ^
		/p:RuntimeIdentifier=win-x64