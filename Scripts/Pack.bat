@echo on

set ProjectPath=D:\Work\GauntletTutorial
set EnginePath=K:\UE4_SourceCode\UE5\unrealengine

"%EnginePath%\Engine\Build\BatchFiles\RunUAT" BuildCookRun -project=%ProjectPath%\GauntletTutorial.uproject -platform=Win64 -configuration=Development -build -cook -pak -stage -server -client

pause