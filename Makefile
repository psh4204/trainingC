.PHONY: clean All

All:
	@echo "----------Building project:[ trainingC - Debug ]----------"
	@cd "ex03" && "$(MAKE)" -f  "trainingC.mk"
clean:
	@echo "----------Cleaning project:[ trainingC - Debug ]----------"
	@cd "ex03" && "$(MAKE)" -f  "trainingC.mk" clean
