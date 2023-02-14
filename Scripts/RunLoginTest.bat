@echo on

set ProjectPath=D:\Work\GauntletTutorial
set StagingDir=%ProjectPath%\Saved\StagedBuilds\
set EnginePath=K:\UE4_SourceCode\UE5\unrealengine

"%EnginePath%\Engine\Build\BatchFiles\RunUAT" RunUnreal -project=%ProjectPath%\GauntletTutorial.uproject ^
-build=%StagingDir% -platform=Win64 -configuration=development ^
-test=GauntletTutorial.Automation.LoginTest(ClientCount=5) ^
-scriptdir=%ProjectPath%
pause