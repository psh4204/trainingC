.PHONY: clean All

All:
	@echo "----------Building project:[ ex05 - Debug ]----------"
	@cd "ex05" && "$(MAKE)" -f  "ex05.mk"
clean:
	@echo "----------Cleaning project:[ ex05 - Debug ]----------"
	@cd "ex05" && "$(MAKE)" -f  "ex05.mk" clean
