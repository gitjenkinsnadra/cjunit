  solution "dr2"
   configurations { "Debug", "Release" }
    location "build"
    includedirs {
      "src",
      os.matchdirs("src/**")
    }
 
   -- A project defines one build target
   project "dr2"
      kind "ConsoleApp"
      language "C"
      files { 
	  os.matchfiles("src/**.c"),
	  os.matchfiles("src/**.h")
      }
      links { "SDL", "mpg123", "glfw", "cairo", "rt", "Xrandr", "X11", "GLU", "GL", "m" }

  
      configuration "Debug"
         defines { "DEBUG", "GPROF" }
         flags { "Symbols", "EnableSSE2", "ExtraWarnings", "FatalWarnings", "StaticRuntime" }
	 buildoptions { 
	   "-Wcast-qual",  
	   "-Wbad-function-cast",
	   "-Wunsafe-loop-optimizations",
	   "-Wshadow",
	   "-Wdeclaration-after-statement",
	   "-Wswitch-default",
	   "-Wmissing-include-dirs",
	   "-Winit-self",
	   "-Wdouble-promotion",
	   "-Wall",
	   "-Wextra",
	   "-pedantic-errors",
	   "-ggdb",
	   "-Wconversion",
	   "-pg",
	   "-Wcast-align",
	   "-Wwrite-strings",
	   "-Wjump-misses-init",
	   "-Wlogical-op",
	   "-Wstrict-prototypes",
	   "-Wold-style-definition",
	   "-Wmissing-prototypes",
	   "-Wmissing-declarations",
	   "-Wmissing-format-attribute",
	   "-Wredundant-decls",
	   "-Wnested-externs",
	   "-Winline",
	   "-Winvalid-pch",
	   "-Wdisabled-optimization",
	   "-Woverlength-strings",
	   "-mmmx",
	   "-m3dnow",
	   "-msse",
	   "-pthread -I/usr/local/include -I/usr/local/include/taglib -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/i386-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12 -I/usr/include/gdk-pixbuf-2.0"
	   }
           linkoptions { "-ggdb -Werror -Wconversion -pg", 
	   "-pthread -L/usr/local/lib -lgio-2.0  -lcairo -lgmodule-2.0 -lgobject-2.0 -lgthread-2.0 -lrt -lglib-2.0 -lmpg123 -lportaudio -lasound -lm -lpthread -ltag_c -ltag "
	   }
 
      configuration "Release"
         defines { "NDEBUG" }
         flags { "OptimizeSpeed", "EnableSSE2", "StaticRuntime" }  
         buildoptions { "-O3", 
         "-I/usr/include/SDL  -pthread -D_GNU_SOURCE=1 -D_REENTRANT -I/usr/local/include -I/usr/local/include/taglib -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/i386-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12 -I/usr/include/gdk-pixbuf-2.0 "
	 }
         linkoptions { 
	   "-pthread -L/usr/local/lib -lgio-2.0 -lgdk_pixbuf-2.0 -lcairo -lgmodule-2.0 -lgobject-2.0 -lgthread-2.0 -lrt -lglib-2.0 -lmpg123 -lportaudio -lasound -lm -lpthread -ltag_c -ltag"
	 }
