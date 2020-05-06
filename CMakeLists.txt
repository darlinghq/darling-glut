project(GLUT)

set(DYLIB_COMPAT_VERSION "1.0.0")
set(DYLIB_CURRENT_VERSION "1.0.0")

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/glsmap)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/gle)


set(GLUT_MAIN
    glut_8x13.c
    glut_9x15.c
    glut_bitmap.c
    glut_bwidth.c
    glut_cindex.c
    glut_ext.c
    glut_hel10.c
    glut_hel12.c
    glut_hel18.c
    glut_mroman.c
    glut_roman.c
    glut_shapes.c
    glut_stroke.c
    glut_swidth.c
    glut_teapot.c
    glut_tr10.c
    glut_tr24.c
    glut_vidresize.c
    HID_Config_Utilities.c
    HID_Error_Handler.c
    HID_Name_Lookup.c
    HID_Queue_Utilities.c
    HID_Utilities.c
    stub.c

    GLUTApplication.m
    GLUTClipboardController.m
    GLUTMenuItem.m
    GLUTMenu.m
    GLUTPreferencesController.m
    GLUTView.m
    GLUTWindow.m
    macx_cursor.m
    macx_dials.m
    macx_dstr.m
    macx_event.m
    macx_fortran.m
    macx_gamemode.m
    macx_get.m
    macx_init.m
    macx_input.m
    macx_joy.m
    macx_key.m
    macx_menu.m
    macx_modifier.m
    macx_overlay.m
    macx_space.m
    macx_swap.m
    macx_tablet.m
    macx_util.m
    macx_warp.m
    macx_win.m
)

set(GLUT_GLSMAP
    glsmap/smap_buildsmap.c
    glsmap/smap_context.c
    glsmap/smap_create.c
    glsmap/smap_destroy.c
    glsmap/smap_drawmesh.c
    glsmap/smap_flag.c
    glsmap/smap_get.c
    glsmap/smap_getfunc.c
    glsmap/smap_gettexdim.c
    glsmap/smap_gettexobj.c
    glsmap/smap_getvec.c
    glsmap/smap_makemesh.c
    glsmap/smap_nearfar.c
    glsmap/smap_origin.c
    glsmap/smap_render.c
    glsmap/smap_rvec2st.c
    glsmap/smap_set.c
    glsmap/smap_setfunc.c
    glsmap/smap_setvec.c
    glsmap/smap_texdim.c
    glsmap/smap_texobj.c
)

set(GLUT_GLE
    gle/ex_angle.c
    gle/ex_cut_round.c
    gle/ex_raw.c
    gle/extrude.c
    gle/intersect.c
    gle/rotate.c
    gle/rot_prince.c
    gle/round_cap.c
    gle/segment.c
    gle/texgen.c
    gle/urotate.c
    gle/view.c
)

add_framework(GLUT
    FAT
    CURRENT_VERSION
    VERSION "A"

    SOURCES
        ${GLUT_MAIN}
        ${GLUT_GLSMAP}
        ${GLUT_GLE}

    DEPENDENCIES
        system
        objc
        Foundation
        OpenGL
        GLU
        AppKit
        CoreGraphics
        IOKit
        QTKit
)
