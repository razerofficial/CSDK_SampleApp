IF NOT EXIST Debug MKDIR Debug
COPY /Y CChromaEditorLibrary.dll Debug

IF NOT EXIST x64 MKDIR x64

IF NOT EXIST x64\Debug MKDIR x64\Debug
COPY /Y CChromaEditorLibrary64.dll x64\Debug

IF NOT EXIST Release MKDIR Release
COPY /Y CChromaEditorLibrary.dll Release

IF NOT EXIST x64\Release MKDIR x64\Release
COPY /Y CChromaEditorLibrary64.dll x64\Release
