workspace "Q"
    architecture "x64"

    configurations 
    {
        "Debug", 
        "Release"
    }

    outputdir = "%{cfg.buildcfg}-%{cfg.architecture}"

    IncludeDir = {}


    project "Q"
        location "Q"
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
            
        }