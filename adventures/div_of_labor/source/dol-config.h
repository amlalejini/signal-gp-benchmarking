#ifndef DOL_CONFIG_H
#define DOL_CONFIG_H

#include "config/config.h"
// TODO: Update configs (both what's in here and the descriptions)!
EMP_BUILD_CONFIG( DOLConfig,
  GROUP(DEFAULT_GROUP, "General Settings"),
  VALUE(RUN_MODE, size_t, 0, "What mode are we running in? \n0: Native experiment\n1: Analyze mode"),
  VALUE(RANDOM_SEED, int, -1, "Random number seed (negative value for based on time)"),
  VALUE(POP_SIZE, size_t, 1000, "Total population size"),
  VALUE(GENERATIONS, size_t, 100, "How many generations should we run evolution?"),
  VALUE(EVAL_TIME, size_t, 256, "Agent evaluation time"),
  VALUE(TRIAL_CNT, size_t, 3, "..."),
  VALUE(ANCESTOR_FPATH, std::string, "ancestor.gp", "Ancestor program file"),
  GROUP(TASK_GROUP, "Task Settings"),
  VALUE(TASK_BASE_REWARD, double, 1024, "Base task reward"),
  VALUE(TASK_SWITCHING_PENALTY, double, 0.5, "Penalty to reward for switching tasks"),
  VALUE(INDIV_TASK_CAP, size_t, 10, "Cap on number of tasks a single individual can get credit for."),
  GROUP(DEME_GROUP, "Deme Settings"),
  VALUE(DEME_WIDTH, size_t, 6, "..."),
  VALUE(DEME_HEIGHT, size_t, 6, "..."),
  VALUE(PROPAGULE_SIZE, size_t, 1, "..."),
  VALUE(PROPAGULE_CLUMPY, bool, true, "..."),
  VALUE(ANY_TIME_ACTIVATION, bool, true, "If true, agents may trigger neighbor activations any time (acts like a remote fork). If false, agents may only activate non-active neighbors."),
  VALUE(TAG_BASED_ACTIVATION, bool, true, "If true, use tag-based referencing to determine which function in called during activation. If false, just call function[0] during activation."),
  VALUE(INBOX_CAPACITY, size_t, 64, "How big is an agent's message inbox (only relevant for imperative runs)"),
  GROUP(SELECTION_GROUP, "Selection Settings"),
  VALUE(TOURNAMENT_SIZE, size_t, 4, "How big are tournaments when using tournament selection or any selection method that uses tournaments?"),
  VALUE(SELECTION_METHOD, size_t, 0, "Which selection method are we using? \n0: Tournament\n1: Lexicase\n2: Eco-EA (resource)\n3: MAP-Elites\n4: Roulette"),
  VALUE(ELITE_SELECT__ELITE_CNT, size_t, 1, "How many elites get free reproduction passes?"),
  GROUP(SGP_PROGRAM_GROUP, "SignalGP program Settings"),
  VALUE(SGP_PROG_MAX_FUNC_CNT, size_t, 8, "Used for generating SGP programs. How many functions do we generate?"),
  VALUE(SGP_PROG_MIN_FUNC_CNT, size_t, 1, "Used for generating SGP programs. How many functions do we generate?"),
  VALUE(SGP_PROG_MAX_FUNC_LEN, size_t, 8, ".."),
  VALUE(SGP_PROG_MIN_FUNC_LEN, size_t, 1, ".."),
  VALUE(SGP_PROG_MAX_TOTAL_LEN, size_t, 256, "Maximum length of SGP programs."),
  GROUP(SGP_HARDWARE_GROUP, "SignalGP Hardware Settings"),
  VALUE(SGP_HW_EVENT_DRIVEN, bool, true, "Is hardware event-driven?"),
  VALUE(SGP_HW_FORK_ON_MSG, bool, true, "If true, hw forks on message. If false, hw loads message contents into current input buffer."),
  VALUE(SGP_HW_MAX_CORES, size_t, 16, "Max number of hardware cores; i.e., max number of simultaneous threads of execution hardware will support."),
  VALUE(SGP_HW_MAX_CALL_DEPTH, size_t, 128, "Max call depth of hardware unit"),
  VALUE(SGP_HW_MIN_BIND_THRESH, double, 0.0, "Hardware minimum referencing threshold"),
  GROUP(SGP_MUTATION_GROUP, "SignalGP Mutation Settings"),
  VALUE(SGP__PROG_MAX_ARG_VAL, int, 16, "Maximum argument value for instructions."),
  VALUE(SGP__PER_BIT__TAG_BFLIP_RATE, double, 0.005, "Per-bit mutation rate of tag bit flips."),
  VALUE(SGP__PER_INST__SUB_RATE, double, 0.005, "Per-instruction/argument subsitution rate."),
  VALUE(SGP__PER_INST__INS_RATE, double, 0.005, "Per-instruction insertion mutation rate."),
  VALUE(SGP__PER_INST__DEL_RATE, double, 0.005, "Per-instruction deletion mutation rate."),
  VALUE(SGP__PER_FUNC__SLIP_RATE, double, 0.05, "Per-function rate of slip mutations."),
  VALUE(SGP__PER_FUNC__FUNC_DUP_RATE, double, 0.05, "Per-function rate of function duplications."),
  VALUE(SGP__PER_FUNC__FUNC_DEL_RATE, double, 0.05, "Per-function rate of function deletions."),
  GROUP(DATA_GROUP, "Data Collection Settings"),
  VALUE(SYSTEMATICS_INTERVAL, size_t, 100, "Interval to record systematics summary stats."),
  VALUE(FITNESS_INTERVAL, size_t, 100, "Interval to record fitness summary stats."),
  VALUE(POP_SNAPSHOT_INTERVAL, size_t, 10000, "Interval to take a full snapshot of the population."),
  VALUE(DATA_DIRECTORY, std::string, "./", "Location to dump data output.")
)

#endif
