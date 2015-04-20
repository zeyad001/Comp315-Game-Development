##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Demo
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\Zeyad\C++\C++CodeLite\Workspace"
ProjectPath            := "C:\Users\Zeyad\C++\C++CodeLite\Workspace\Demo"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Zeyad
Date                   :=04/20/15
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe 
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Demo.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe 
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)glu32 $(LibrarySwitch)opengl32 $(LibrarySwitch)freeglut 
ArLibs                 :=  "glu32" "opengl32" "freeglut" 
LibPath                := $(LibraryPathSwitch)C:/MinGW/lib 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe 
CC       := C:/MinGW/bin/gcc.exe 
CXXFLAGS := -std=c++11 -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe 


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/camera.cpp$(ObjectSuffix) $(IntermediateDirectory)/gameloop.cpp$(ObjectSuffix) $(IntermediateDirectory)/player.cpp$(ObjectSuffix) $(IntermediateDirectory)/scene.cpp$(ObjectSuffix) $(IntermediateDirectory)/vec3f.cpp$(ObjectSuffix) $(IntermediateDirectory)/Inventory.cpp$(ObjectSuffix) $(IntermediateDirectory)/Point.cpp$(ObjectSuffix) $(IntermediateDirectory)/Event.cpp$(ObjectSuffix) $(IntermediateDirectory)/EventMessagingSystem.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/PlayerMovement.cpp$(ObjectSuffix) $(IntermediateDirectory)/NpcMovement.cpp$(ObjectSuffix) $(IntermediateDirectory)/Collision.cpp$(ObjectSuffix) $(IntermediateDirectory)/CollisionPlane.cpp$(ObjectSuffix) $(IntermediateDirectory)/CollisionSphere.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pistol.cpp$(ObjectSuffix) $(IntermediateDirectory)/Ray.cpp$(ObjectSuffix) $(IntermediateDirectory)/GameWorld.cpp$(ObjectSuffix) $(IntermediateDirectory)/objloader.cpp$(ObjectSuffix) $(IntermediateDirectory)/ResourceManager.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/Zombie.cpp$(ObjectSuffix) $(IntermediateDirectory)/Health.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/camera.cpp$(ObjectSuffix): camera.cpp $(IntermediateDirectory)/camera.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/camera.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/camera.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/camera.cpp$(DependSuffix): camera.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/camera.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/camera.cpp$(DependSuffix) -MM "camera.cpp"

$(IntermediateDirectory)/camera.cpp$(PreprocessSuffix): camera.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/camera.cpp$(PreprocessSuffix) "camera.cpp"

$(IntermediateDirectory)/gameloop.cpp$(ObjectSuffix): gameloop.cpp $(IntermediateDirectory)/gameloop.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/gameloop.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/gameloop.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/gameloop.cpp$(DependSuffix): gameloop.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/gameloop.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/gameloop.cpp$(DependSuffix) -MM "gameloop.cpp"

$(IntermediateDirectory)/gameloop.cpp$(PreprocessSuffix): gameloop.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/gameloop.cpp$(PreprocessSuffix) "gameloop.cpp"

$(IntermediateDirectory)/player.cpp$(ObjectSuffix): player.cpp $(IntermediateDirectory)/player.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/player.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/player.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/player.cpp$(DependSuffix): player.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/player.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/player.cpp$(DependSuffix) -MM "player.cpp"

$(IntermediateDirectory)/player.cpp$(PreprocessSuffix): player.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/player.cpp$(PreprocessSuffix) "player.cpp"

$(IntermediateDirectory)/scene.cpp$(ObjectSuffix): scene.cpp $(IntermediateDirectory)/scene.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/scene.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/scene.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/scene.cpp$(DependSuffix): scene.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/scene.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/scene.cpp$(DependSuffix) -MM "scene.cpp"

$(IntermediateDirectory)/scene.cpp$(PreprocessSuffix): scene.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/scene.cpp$(PreprocessSuffix) "scene.cpp"

$(IntermediateDirectory)/vec3f.cpp$(ObjectSuffix): vec3f.cpp $(IntermediateDirectory)/vec3f.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/vec3f.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/vec3f.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/vec3f.cpp$(DependSuffix): vec3f.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/vec3f.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/vec3f.cpp$(DependSuffix) -MM "vec3f.cpp"

$(IntermediateDirectory)/vec3f.cpp$(PreprocessSuffix): vec3f.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/vec3f.cpp$(PreprocessSuffix) "vec3f.cpp"

$(IntermediateDirectory)/Inventory.cpp$(ObjectSuffix): Inventory.cpp $(IntermediateDirectory)/Inventory.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/Inventory.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Inventory.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Inventory.cpp$(DependSuffix): Inventory.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Inventory.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Inventory.cpp$(DependSuffix) -MM "Inventory.cpp"

$(IntermediateDirectory)/Inventory.cpp$(PreprocessSuffix): Inventory.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Inventory.cpp$(PreprocessSuffix) "Inventory.cpp"

$(IntermediateDirectory)/Point.cpp$(ObjectSuffix): Point.cpp $(IntermediateDirectory)/Point.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/Point.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Point.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Point.cpp$(DependSuffix): Point.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Point.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Point.cpp$(DependSuffix) -MM "Point.cpp"

$(IntermediateDirectory)/Point.cpp$(PreprocessSuffix): Point.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Point.cpp$(PreprocessSuffix) "Point.cpp"

$(IntermediateDirectory)/Event.cpp$(ObjectSuffix): Event.cpp $(IntermediateDirectory)/Event.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/Event.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Event.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Event.cpp$(DependSuffix): Event.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Event.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Event.cpp$(DependSuffix) -MM "Event.cpp"

$(IntermediateDirectory)/Event.cpp$(PreprocessSuffix): Event.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Event.cpp$(PreprocessSuffix) "Event.cpp"

$(IntermediateDirectory)/EventMessagingSystem.cpp$(ObjectSuffix): EventMessagingSystem.cpp $(IntermediateDirectory)/EventMessagingSystem.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/EventMessagingSystem.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/EventMessagingSystem.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/EventMessagingSystem.cpp$(DependSuffix): EventMessagingSystem.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/EventMessagingSystem.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/EventMessagingSystem.cpp$(DependSuffix) -MM "EventMessagingSystem.cpp"

$(IntermediateDirectory)/EventMessagingSystem.cpp$(PreprocessSuffix): EventMessagingSystem.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/EventMessagingSystem.cpp$(PreprocessSuffix) "EventMessagingSystem.cpp"

$(IntermediateDirectory)/PlayerMovement.cpp$(ObjectSuffix): PlayerMovement.cpp $(IntermediateDirectory)/PlayerMovement.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/PlayerMovement.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PlayerMovement.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PlayerMovement.cpp$(DependSuffix): PlayerMovement.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PlayerMovement.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PlayerMovement.cpp$(DependSuffix) -MM "PlayerMovement.cpp"

$(IntermediateDirectory)/PlayerMovement.cpp$(PreprocessSuffix): PlayerMovement.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PlayerMovement.cpp$(PreprocessSuffix) "PlayerMovement.cpp"

$(IntermediateDirectory)/NpcMovement.cpp$(ObjectSuffix): NpcMovement.cpp $(IntermediateDirectory)/NpcMovement.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/NpcMovement.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NpcMovement.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/NpcMovement.cpp$(DependSuffix): NpcMovement.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/NpcMovement.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/NpcMovement.cpp$(DependSuffix) -MM "NpcMovement.cpp"

$(IntermediateDirectory)/NpcMovement.cpp$(PreprocessSuffix): NpcMovement.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/NpcMovement.cpp$(PreprocessSuffix) "NpcMovement.cpp"

$(IntermediateDirectory)/Collision.cpp$(ObjectSuffix): Collision.cpp $(IntermediateDirectory)/Collision.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/Collision.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Collision.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Collision.cpp$(DependSuffix): Collision.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Collision.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Collision.cpp$(DependSuffix) -MM "Collision.cpp"

$(IntermediateDirectory)/Collision.cpp$(PreprocessSuffix): Collision.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Collision.cpp$(PreprocessSuffix) "Collision.cpp"

$(IntermediateDirectory)/CollisionPlane.cpp$(ObjectSuffix): CollisionPlane.cpp $(IntermediateDirectory)/CollisionPlane.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/CollisionPlane.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CollisionPlane.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/CollisionPlane.cpp$(DependSuffix): CollisionPlane.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/CollisionPlane.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/CollisionPlane.cpp$(DependSuffix) -MM "CollisionPlane.cpp"

$(IntermediateDirectory)/CollisionPlane.cpp$(PreprocessSuffix): CollisionPlane.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/CollisionPlane.cpp$(PreprocessSuffix) "CollisionPlane.cpp"

$(IntermediateDirectory)/CollisionSphere.cpp$(ObjectSuffix): CollisionSphere.cpp $(IntermediateDirectory)/CollisionSphere.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/CollisionSphere.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CollisionSphere.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/CollisionSphere.cpp$(DependSuffix): CollisionSphere.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/CollisionSphere.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/CollisionSphere.cpp$(DependSuffix) -MM "CollisionSphere.cpp"

$(IntermediateDirectory)/CollisionSphere.cpp$(PreprocessSuffix): CollisionSphere.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/CollisionSphere.cpp$(PreprocessSuffix) "CollisionSphere.cpp"

$(IntermediateDirectory)/Pistol.cpp$(ObjectSuffix): Pistol.cpp $(IntermediateDirectory)/Pistol.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/Pistol.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pistol.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pistol.cpp$(DependSuffix): Pistol.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Pistol.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Pistol.cpp$(DependSuffix) -MM "Pistol.cpp"

$(IntermediateDirectory)/Pistol.cpp$(PreprocessSuffix): Pistol.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pistol.cpp$(PreprocessSuffix) "Pistol.cpp"

$(IntermediateDirectory)/Ray.cpp$(ObjectSuffix): Ray.cpp $(IntermediateDirectory)/Ray.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/Ray.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Ray.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Ray.cpp$(DependSuffix): Ray.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Ray.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Ray.cpp$(DependSuffix) -MM "Ray.cpp"

$(IntermediateDirectory)/Ray.cpp$(PreprocessSuffix): Ray.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Ray.cpp$(PreprocessSuffix) "Ray.cpp"

$(IntermediateDirectory)/GameWorld.cpp$(ObjectSuffix): GameWorld.cpp $(IntermediateDirectory)/GameWorld.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/GameWorld.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/GameWorld.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/GameWorld.cpp$(DependSuffix): GameWorld.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/GameWorld.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/GameWorld.cpp$(DependSuffix) -MM "GameWorld.cpp"

$(IntermediateDirectory)/GameWorld.cpp$(PreprocessSuffix): GameWorld.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/GameWorld.cpp$(PreprocessSuffix) "GameWorld.cpp"

$(IntermediateDirectory)/objloader.cpp$(ObjectSuffix): objloader.cpp $(IntermediateDirectory)/objloader.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/objloader.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/objloader.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/objloader.cpp$(DependSuffix): objloader.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/objloader.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/objloader.cpp$(DependSuffix) -MM "objloader.cpp"

$(IntermediateDirectory)/objloader.cpp$(PreprocessSuffix): objloader.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/objloader.cpp$(PreprocessSuffix) "objloader.cpp"

$(IntermediateDirectory)/ResourceManager.cpp$(ObjectSuffix): ResourceManager.cpp $(IntermediateDirectory)/ResourceManager.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/ResourceManager.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ResourceManager.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ResourceManager.cpp$(DependSuffix): ResourceManager.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ResourceManager.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ResourceManager.cpp$(DependSuffix) -MM "ResourceManager.cpp"

$(IntermediateDirectory)/ResourceManager.cpp$(PreprocessSuffix): ResourceManager.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ResourceManager.cpp$(PreprocessSuffix) "ResourceManager.cpp"

$(IntermediateDirectory)/Zombie.cpp$(ObjectSuffix): Zombie.cpp $(IntermediateDirectory)/Zombie.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/Zombie.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Zombie.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Zombie.cpp$(DependSuffix): Zombie.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Zombie.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Zombie.cpp$(DependSuffix) -MM "Zombie.cpp"

$(IntermediateDirectory)/Zombie.cpp$(PreprocessSuffix): Zombie.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Zombie.cpp$(PreprocessSuffix) "Zombie.cpp"

$(IntermediateDirectory)/Health.cpp$(ObjectSuffix): Health.cpp $(IntermediateDirectory)/Health.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Zeyad/C++/C++CodeLite/Workspace/Demo/Health.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Health.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Health.cpp$(DependSuffix): Health.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Health.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Health.cpp$(DependSuffix) -MM "Health.cpp"

$(IntermediateDirectory)/Health.cpp$(PreprocessSuffix): Health.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Health.cpp$(PreprocessSuffix) "Health.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


