# $(call my-dir): 현재 위치를 반환.
LOCAL_PATH := $(call my-dir)
# $(CLEAR_VARS): LOCAL_PATH를 제외한 LOCAL_MODULE, LOCAL_SRC_FILES와 수 많은  LOCAL_XXX 변수를 초기화.
include $(CLEAR_VARS)
# C/C++ 소스코드 빌드 할 때, 사용할 옵션.
# -pie -fPIE: PIE(Position Independant Executable) 옵션, -fPIE(compiler operation), -pie(linker option).
LOCAL_CFLAGS += -fPIE -pie
# 파일명 지정.
LOCAL_MODULE := ak7755_test
# 소스코드 파일 지정.
LOCAL_SRC_FILES := ak7755_test.c
# 실행 가능한 바이너리 생성.
# 라이브러리 생성 시에는 BUILD_SHARED_LIBRARY, BUILD_STATIC_LIBRARY 등을 사용.
include $(BUILD_EXECUTABLE)
