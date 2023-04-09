# SearchHider
This smol program hides the Search panel used in Windows 8.1 that renders 1/5th the screen unusable after stopping/deleting DWM (a.k.a. desktop composition).

## Background info
Starting with Windows 8, Explorer has a Metro search panel which is hidden most time and can be invoked either at Start screen or using Win+S.  
If you manage to disable/kill dwm.exe (the desktop compositor), that panel will always be on top of every window occuping 1/5th of the screen.  
I'm experimenting a bit with Win8.1 and decided to use it without dwm for some time, until got fed up of manually hiding that panel at every boot so I've installed full VS 2013 just to build this. Yes, there must have been some easier/faster way to do this.

## Visual Studio version used
I made this project using Visual Studio 2013, so any version after this should just work I guess.

## How to build 
Open solution file (SearchHider.sln), select the variant (Debug/Release) and architecture (Win32/x64) that you want, and just build solution.

## Problems?
Just fill an issue, I don't think this will ever need that tho
