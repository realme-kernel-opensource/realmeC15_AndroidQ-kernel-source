obj-$(CONFIG_OPPO_FINGERPRINT) += oppo_fp_common/

obj-$(CONFIG_OPPO_FINGERPRINT) += egis520/
obj-$(CONFIG_OPPO_FINGERPRINT) += chipone/
ifeq ($(shell echo $(TARGET_PRODUCT) | sed -e 's/_1.*//g'),full_oppo6885)
obj-$(CONFIG_OPPO_FINGERPRINT) += goodix_optical_fp/
else
#obj-$(CONFIG_OPPO_FINGERPRINT) += fpc/
obj-$(CONFIG_OPPO_FINGERPRINT) += goodix_gf3626/
obj-$(CONFIG_OPPO_FINGERPRINT) += goodix_optical_fp/
ifeq ($(CONFIG_OPPO_FINGERPRINT_QCOM),y)
obj-$(CONFIG_OPPO_FINGERPRINT) += silead/
endif
endif
