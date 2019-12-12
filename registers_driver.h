/*  registers_driver.h
*  State University of New York, Binghamton
*/

int check_pr_free(APEX_CPU* cpu);

int allocate_pr(APEX_CPU* cpu, int arch_reg);

void release_pr(APEX_CPU* cpu, int phys_reg);

void commit_reg(APEX_CPU* cpu, int arch_reg, int phys_reg);

void rename_src1(APEX_CPU* cpu);

void rename_src2(APEX_CPU* cpu);

void rename_src3(APEX_CPU* cpu);

void read_src1(APEX_CPU* cpu);

void read_src2(APEX_CPU* cpu);

void read_src3(APEX_CPU* cpu);

void commit_urf_rat(APEX_CPU* cpu, int bis_id);

void restore_urf_rat(APEX_CPU* cpu);

void record_urf(APEX_CPU* cpu, enum STAGES FU_type);

void print_reg(APEX_CPU* cpu);

void display_stored_rat(APEX_CPU* cpu, int branch_id);

void print_rm(APEX_CPU* cpu);
