workspace "Octavia"
    architecture "x64"

    configurations 
    {
        "Debug", 
        "Release"
    }

    outputdir = "%{cfg.buildcfg}-%{cfg.architecture}"

    IncludeDir = {}
    IncludeDir["PortAudio"] = "Octavia/vendor/portaudio/include"


    project "Octavia"
        location "Octavia"
        kind "ConsoleApp"
        language "C++"
        cppdialect "C++20"

        targetdir("bin/" ..outputdir.. "/%{prj.name}")
        objdir("bin-int/" ..outputdir.. "/%{prj.name}")

        libdirs 
        { 
            "Octavia/vendor/portaudio/build/msvc/x64/Debug" 
        }

        links
        {
		    "portaudio_x64"
        }

        files 
        {
       
        }

        defines
        {
    
        }

        includedirs
        {
            "%{prj.name}/src",
            "%{IncludeDir.PortAudio}",
        }

        filter "configurations:Debug"
            defines "OC_DEBUG"
            buildoptions "/MDd"
            symbols "On"
        
        filter "configurations:Release"
            defines "OC_RELEASE"
            buildoptions "/MD"
            optimize "On"
    
        postbuildcommands {
            ("{COPY} Octavia/vendor/portaudio/build/msvc/x64/Debug/portaudio_x64.dll bin/" ..outputdir.. "/%{prj.name}")
        }