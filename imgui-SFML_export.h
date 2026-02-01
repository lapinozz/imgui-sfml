#ifndef IMGUI_SFML_EXPORT_H
#define IMGUI_SFML_EXPORT_H

#if IMGUI_SFML_SHARED_LIB
#if _WIN32
#ifdef IMGUI_SFML_EXPORTS
#define IMGUI_SFML_API __declspec(dllexport)
#else
#define IMGUI_SFML_API __declspec(dllimport)
#endif
#else
#define IMGUI_SFML_API
#endif
#else
#define IMGUI_SFML_API
#endif

#define IMGUI_API IMGUI_SFML_API
#endif
