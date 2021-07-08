.PHONY: clean All

All:
	@echo "----------Building project:[ ex04_array - Debug ]----------"
	@cd "ex04_array" && "$(MAKE)" -f  "ex04_array.mk"
clean:
	@echo "----------Cleaning project:[ ex04_array - Debug ]----------"
	@cd "ex04_array" && "$(MAKE)" -f  "ex04_array.mk" clean
