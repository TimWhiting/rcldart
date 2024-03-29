#ifndef _H_84552A72AA7717486A3AA5CC4651D8D5_ParameterEventDescriptors_DCPS_H_
#define _H_84552A72AA7717486A3AA5CC4651D8D5_ParameterEventDescriptors_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "ParameterEventDescriptors_.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            class ParameterEventDescriptors_TypeSupportInterface;

            typedef ParameterEventDescriptors_TypeSupportInterface * ParameterEventDescriptors_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ParameterEventDescriptors_TypeSupportInterface> ParameterEventDescriptors_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ParameterEventDescriptors_TypeSupportInterface> ParameterEventDescriptors_TypeSupportInterface_out;


            class ParameterEventDescriptors_DataWriter;

            typedef ParameterEventDescriptors_DataWriter * ParameterEventDescriptors_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ParameterEventDescriptors_DataWriter> ParameterEventDescriptors_DataWriter_var;
            typedef DDS_DCPSInterface_out < ParameterEventDescriptors_DataWriter> ParameterEventDescriptors_DataWriter_out;


            class ParameterEventDescriptors_DataReader;

            typedef ParameterEventDescriptors_DataReader * ParameterEventDescriptors_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ParameterEventDescriptors_DataReader> ParameterEventDescriptors_DataReader_var;
            typedef DDS_DCPSInterface_out < ParameterEventDescriptors_DataReader> ParameterEventDescriptors_DataReader_out;


            class ParameterEventDescriptors_DataReaderView;

            typedef ParameterEventDescriptors_DataReaderView * ParameterEventDescriptors_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ParameterEventDescriptors_DataReaderView> ParameterEventDescriptors_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ParameterEventDescriptors_DataReaderView> ParameterEventDescriptors_DataReaderView_out;

            struct ParameterEventDescriptors_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < ParameterEventDescriptors_, struct ParameterEventDescriptors_Seq_uniq_> ParameterEventDescriptors_Seq;
            typedef DDS_DCPSSequence_var < ParameterEventDescriptors_Seq> ParameterEventDescriptors_Seq_var;
            typedef DDS_DCPSSequence_out < ParameterEventDescriptors_Seq> ParameterEventDescriptors_Seq_out;

            class  ParameterEventDescriptors_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ParameterEventDescriptors_TypeSupportInterface_ptr _ptr_type;
                typedef ParameterEventDescriptors_TypeSupportInterface_var _var_type;

                static ParameterEventDescriptors_TypeSupportInterface_ptr _duplicate (ParameterEventDescriptors_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterEventDescriptors_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ParameterEventDescriptors_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterEventDescriptors_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterEventDescriptors_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ParameterEventDescriptors_TypeSupportInterface () {};
                ~ParameterEventDescriptors_TypeSupportInterface () {};
            private:
                ParameterEventDescriptors_TypeSupportInterface (const ParameterEventDescriptors_TypeSupportInterface &);
                ParameterEventDescriptors_TypeSupportInterface & operator = (const ParameterEventDescriptors_TypeSupportInterface &);
            };

            class  ParameterEventDescriptors_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ParameterEventDescriptors_DataWriter_ptr _ptr_type;
                typedef ParameterEventDescriptors_DataWriter_var _var_type;

                static ParameterEventDescriptors_DataWriter_ptr _duplicate (ParameterEventDescriptors_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterEventDescriptors_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ParameterEventDescriptors_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterEventDescriptors_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterEventDescriptors_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ParameterEventDescriptors_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ParameterEventDescriptors_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ParameterEventDescriptors_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ParameterEventDescriptors_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ParameterEventDescriptors_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ParameterEventDescriptors_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ParameterEventDescriptors_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ParameterEventDescriptors_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ParameterEventDescriptors_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ParameterEventDescriptors_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ParameterEventDescriptors_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ParameterEventDescriptors_& instance_data) = 0;

            protected:
                ParameterEventDescriptors_DataWriter () {};
                ~ParameterEventDescriptors_DataWriter () {};
            private:
                ParameterEventDescriptors_DataWriter (const ParameterEventDescriptors_DataWriter &);
                ParameterEventDescriptors_DataWriter & operator = (const ParameterEventDescriptors_DataWriter &);
            };

            class  ParameterEventDescriptors_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ParameterEventDescriptors_DataReader_ptr _ptr_type;
                typedef ParameterEventDescriptors_DataReader_var _var_type;

                static ParameterEventDescriptors_DataReader_ptr _duplicate (ParameterEventDescriptors_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterEventDescriptors_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ParameterEventDescriptors_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterEventDescriptors_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterEventDescriptors_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ParameterEventDescriptors_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ParameterEventDescriptors_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ParameterEventDescriptors_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ParameterEventDescriptors_& instance) = 0;

            protected:
                ParameterEventDescriptors_DataReader () {};
                ~ParameterEventDescriptors_DataReader () {};
            private:
                ParameterEventDescriptors_DataReader (const ParameterEventDescriptors_DataReader &);
                ParameterEventDescriptors_DataReader & operator = (const ParameterEventDescriptors_DataReader &);
            };

            class  ParameterEventDescriptors_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ParameterEventDescriptors_DataReaderView_ptr _ptr_type;
                typedef ParameterEventDescriptors_DataReaderView_var _var_type;

                static ParameterEventDescriptors_DataReaderView_ptr _duplicate (ParameterEventDescriptors_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ParameterEventDescriptors_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ParameterEventDescriptors_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ParameterEventDescriptors_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ParameterEventDescriptors_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ParameterEventDescriptors_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ParameterEventDescriptors_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ParameterEventDescriptors_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ParameterEventDescriptors_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ParameterEventDescriptors_& instance) = 0;

            protected:
                ParameterEventDescriptors_DataReaderView () {};
                ~ParameterEventDescriptors_DataReaderView () {};
            private:
                ParameterEventDescriptors_DataReaderView (const ParameterEventDescriptors_DataReaderView &);
                ParameterEventDescriptors_DataReaderView & operator = (const ParameterEventDescriptors_DataReaderView &);
            };
        }

    }

}

#endif
